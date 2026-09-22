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

Node* removeTail(Node* head) {
    //Check if LL has <= 1 element.
    //If yes then the only element is the tail itself and removing it will point to null only
    //Head will always be pointing to null in this case.
    if(head == NULL || head->next == NULL) return head;
    //Create a temp node to store head node.
    //Never do anything to nead, create temp head and do anything with it.
    Node* temp = head;

    //Move forward while dont encounter the 2nd last node.
    while(temp->next->next != NULL) {
        temp = temp->next;
    }
    //Currently we stand on 2nd last, delete the next(last)
    delete temp->next;
    //Make the 2nd last point to null to make it last.
    temp->next = nullptr;

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
    Node* ans = removeTail(head);
    printHead(ans);
    

    return 0;
}