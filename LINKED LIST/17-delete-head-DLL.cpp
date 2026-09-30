#include<iostream>
#include<vector>
using namespace std;

//Node creation.
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
    //Create the head node and store the first element in it.
    Node* head = new Node(nums[0]);
    //Never touch the head -> store it in prev
    //It will be used for trversal as well as for prev pointer.
    Node* prev = head;
    //Create new nodes after head.
    for(int i = 1; i < nums.size(); i++) {
        //Node creation with prev pointer as prev and next as null.
        Node* temp = new Node(nums[i], nullptr, prev);
        //Point prev node's next to new node.
        prev->next = temp;
        //Make prev the new node for next iteration.
        prev = temp;
    }
    //Return head for printing the DLL.
    return head;
}

Node* deleteHead(Node* head) {
    //Edge case: If there is <= 1 nodes.
    if(head == NULL || head->next == NULL) return NULL;
    //Store the head in temp Node.
    Node* temp = head;
    //Make next node to be the head.
    head = head->next;
    //Make the new head's prev point to null.
    head->prev = nullptr;
    //Make the original head's next point to null.
    //Done to disconnect it completely.
    temp->next = nullptr;
    //Delete the original head.
    delete temp;
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
    vector<int> nums = {1, 2, 3, 4, 5};
    Node* head = convertArrayToDLL(nums);
    Node* newHead = deleteHead(head);
    printDLL(newHead);

    return 0;
}