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

vector<int> traversalLL(Node* head) {
    //Create a temp node to store head node.
    Node* temp = head;
    //Create a vector to return the data in traversed nodes.
    vector<int> nums;
    //Loop -> runs while temp is valid/till nodes exist/till the pointer of a node points to null.
    while(temp) {
        //pushback the data/val in vector from LL.
        nums.push_back(temp->data);
        //Update temp with pointer of next node in each iteration.
        temp = temp->next;
    }
    return nums;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    Node* head = convertArrayToLL(nums);
    vector<int> ans = traversalLL(head);

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
