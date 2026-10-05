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
    if(k == 1) return insertBeforeHead(head, val);
    Node* temp = head;
    int count = 0;

    while(temp->next != NULL) {
        count++;
        if(k == count) break;
        temp = temp->next;
    }
    Node* prev = temp->prev;
    Node* newNode = new Node(val, temp, prev);
    prev->next = newNode;
    temp->prev = newNode;
    return head;
}

void insertBeforeNode(Node* node, int val) {
    //Store the prev node to access it.
    Node* prev = node->prev;
    //Create a new node.
    Node* newNode = new Node(val, node, prev);
    //Point the prev and given node to the new node.
    node->prev = newNode;
    prev->next = newNode;
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
   insertBeforeNode(head->next->next->next->next, 5);
    printDLL(head);

    return 0;
}