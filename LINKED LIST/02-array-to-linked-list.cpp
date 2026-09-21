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

Node* convertArrayToLL(vector<int> arr) {
    //Create a permanent HEAD node pointing to the first node.
    //Important to remember the starting node.
    Node* head = new Node(arr[0]);
    //Create a MOVER pointer tracking the position of the Current Node.
    Node* mover = head;

    //Loop -> Runs from 1 to (n - 1).
    for(int i = 1; i < arr.size(); i++) {
        //Create a temp node, storing the current node.
        Node* temp = new Node(arr[i]);
        //Mover now points to it, linking it with previous node.
        mover->next = temp;
        //Mover now becomes this node
        mover = temp;
    }
    return head;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    //Create a node which stores the returned head node from function.
    Node* head = convertArrayToLL(arr);
    //Print the value of head.
    cout << head->data << endl;
    //Print what it points to.
    cout << head->next;
}