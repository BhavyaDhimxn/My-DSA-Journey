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

Node* insertAtPosition(Node* head, int val, int k) {
    //Edge Case 1:
    //If no node exists -> Create a new node if asked to be inserted as 1st node.
    //Else return null.
    if(head == NULL) {
        if(k == 1) {
            Node* newNode = new Node(val, nullptr);
            return newNode; 
        }
        else return nullptr;
    }
    //Edge Case 2:
    //If insertion at head asked, do normal insertion at head.
    if(k == 1) {
        Node* newNode = new Node(val, nullptr);
        return newNode; 
    }
    //Edge Case 3:
    //K >= 2, Creat temp to store head and keep a counter to compare the position.
    int count = 0;
    Node* temp = head;
    //Run a loop till the last node
    while(temp) {
        count++;
        //If previous node reached.
        //Create the new node and point it to the next node.
        //point the next of previous node to new node.
        if(count == (k - 1)) {
            Node* newNode = new Node(val, temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
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
    Node* newHead = insertAtPosition(head, 2, 2);
    printList(newHead);

    return 0;
}