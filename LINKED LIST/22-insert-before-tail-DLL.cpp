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
    //Edge Case: Only 1 node exists -> Insertion before head.
    if(head->next == NULL) return insertBeforeHead(head, val);
    //Store the HEAD node.
    Node* temp = head;
    //Loop -> Runs and stops when you reach the last node.
    while(temp->next != NULL) {
        temp = temp->next;
    }
    //Store the second last node.
    Node* prev = temp->prev;
    //Create the new node to be inserted.
    //Next points to last node.
    //Prev points to second last node.
    Node* newNode = new Node(val, temp, prev);
    //Point the prev and last nodes to this new node.
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
    vector<int> nums = {6};
    Node* head = convertArrayToDLL(nums);
    Node* newHead = insertBeforeTail(head, 5);
    printDLL(newHead);

    return 0;
}