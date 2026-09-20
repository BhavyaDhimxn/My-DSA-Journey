#include<iostream>
using namespace std;

class Node {
public:
    //To store integer data.
    int data;
    //To store pointer to address of next node.
    Node* next;

public:
    //Creating a constructor.
    Node(int value, Node* nextAddress) {
        data = value;
        next = nextAddress;
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    //Initialise a new node.
    Node* newNode = new Node(arr[0], nullptr);
    cout << newNode->data << endl;
}