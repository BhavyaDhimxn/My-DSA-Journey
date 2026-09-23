#include<iostream>
#include<vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;
public:
    Node(int val, Node* nextAdd) {
        data = val;
        next = nextAdd;
    }
};

Node* convertArraytoLL(vector<int>& nums) {
    Node* head = new Node(nums[0], nullptr);
    Node* mover = head;
    for(int i = 1; i < nums.size(); i++) {
        Node* temp = new Node(nums[i], nullptr);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node* insertAtTail(Node* head, int val) {
    //Create a new node and point its next to head.
    if(head == NULL) {
        Node* newNode = new Node(val, nullptr);
        return newNode;
    } 
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(val, nullptr);
    temp->next = newNode;

    return head;
}

void printList(Node* head) {
    Node* temp = head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    Node* head = convertArraytoLL(nums);
    Node* newHead = insertAtTail(head, 6);
    printList(newHead);

    return 0;
}