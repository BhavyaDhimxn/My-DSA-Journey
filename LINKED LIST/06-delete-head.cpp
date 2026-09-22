#include<iostream>
#include<vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;

public:
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

Node* convertArrayToLL(vector<int> nums) {
    Node* head = new Node(nums[0]);
    Node* mover = head;

    for(int i = 1; i < nums.size(); i++) {
        Node* temp = new Node(nums[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
} 

Node* removeHead(Node* head) {
    //Check if head is pointing to null;
    if(head == NULL) return head;
    //Create a temp node to store head node.
    Node* temp = head;

    //Point the head to next node.
    head = head->next;
    delete temp;
    return head;
}

void printHead(Node* head) {
    while(head) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    Node* head = convertArrayToLL(nums);
    Node* ans = removeHead(head);
    printHead(ans);
    

    return 0;
}