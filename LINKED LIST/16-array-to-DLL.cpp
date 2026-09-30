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

void printDLL(Node* head) {
    Node* temp = head;
    while(temp) {
        cout << temp->data << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    Node* head = convertArrayToDLL(nums);
    printDLL(head);

    return 0;
}