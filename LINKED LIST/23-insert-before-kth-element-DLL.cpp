#include<iostream>
#include<vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;
public:
    Node(int val, Node* nextAddress, Node* prevAddress) {
        data = val;
        next = nextAddress;
        prev = prevAddress;
    }
public:
    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

Node* convertArrayToDLL(vector<int>& nums) {
    Node* head = new Node(nums[0]);
    Node* prev = head;
    for(int i = 1; i < nums.size(); i++) {
        Node* newNode = new Node(nums[i], nullptr, prev);
        prev->next = newNode;
        prev = newNode;
    }
    return head;
}

Node* insertBeforeHead(Node* head, int val) {
    Node* newNode = new Node(val, head, nullptr);
    head->prev = newNode;
    return newNode;
}

Node* insertBeforeTail(Node* head, int val) {
    if(head->next == NULL) return insertBeforeHead(head, val);
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    Node* prev = temp->prev;
    Node* newNode = new Node(val, temp, prev);
    prev->next = newNode;
    temp->prev = newNode;
    return head;
}

Node* insertBeforeKthElement(Node* head, int val, int k) {
    //Edge Case: If k = 1 -> insertion before head is asked.
    if(k == 1) return insertBeforeHead(head, val);
    //Store the HEAD.
    Node* temp = head;
    //Keep a counter for further comparison with k.
    int count = 0;
    //Loop -> Runs till we reach the element.
    while(temp->next != NULL) {
        //Increment count for each node.
        count++;
        //If element reached -> break.
        if(k == count) break;
        //Move to next node.
        temp = temp->next;
    }
    //Store the prev node to access it.
    Node* prev = temp->prev;
    //Create a new node pointing to temp and prev nodes.
    Node* newNode = new Node(val, temp, prev);
    //Point the prev and temp nodes to new node.
    prev->next = newNode;
    temp->prev = newNode;
    return head;
}
void printDLL(Node* head) {
    Node* temp = head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 6};
    Node* head = convertArrayToDLL(nums);
    Node* newHead = insertBeforeKthElement(head, 5, 5);
    printDLL(newHead);

    return 0;
}