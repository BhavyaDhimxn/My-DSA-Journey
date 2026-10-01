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
    //Create the new node that is to be inserted.
    //Node's next points to the original HEAD.
    //Nodes's prev points to null -> to make it the new HEAD.
    Node* newNode = new Node(val, head, nullptr);
    //Original HEAD's prev points to new HEAD.
    head->prev = newNode;
    //Return the new HEAD.
    return newNode;
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
    vector<int> nums = {1, 2, 3, 4, 5};
    Node* head = convertArrayToDLL(nums);
    Node* newHead = insertBeforeHead(head, 0);
    printDLL(newHead);

    return 0;
}