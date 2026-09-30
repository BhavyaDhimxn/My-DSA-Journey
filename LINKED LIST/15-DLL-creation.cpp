#include<iostream>
#include<vector>
using namespace std;

class Node {
//Initialise the data members publicaly.
public:
    //To store vale of node.
    int data;
    //To store pointer to next node.
    Node* next;
    //To store pointer to previous node
    Node* prev;

//Create constructor assign values to be stored.
public:
    //Constructor used when we pass next and prev pointers while creation.
    Node(int val, Node* nextAddress, Node* prevAddress) {
        data = val;
        next = nextAddress;
        prev = prevAddress;
    }

//Create constructor assign values to be stored.
public:
    //Constructor used when we pass only value while creation.
    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    //Create a new node.
    Node* newNode = new Node(nums[0]);
    //Print the value of the node.
    cout << newNode->data << endl;

    return 0;
}