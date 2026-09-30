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
    Node* head = new Node(nums[0]);
    Node* prev = head;
    for(int i = 1; i < nums.size(); i++) {
        Node* temp = new Node(nums[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void deleteNode(Node* node) {
    //Store the front and back nodes wrt to given node.
    Node* front = node->next;
    Node* back = node->prev;
    //Edge Case: If last node is given.
    if(node->next == NULL) {
        //Point the back node to null and disconnect given node.
        back->next = nullptr;
        node->prev = nullptr;
        delete node;
        return;
    }
    //Point front and back towards each other and disconnect given node.
    front->prev = back;
    back->next = front;
    node->next = nullptr;
    node->prev = nullptr;
    delete node;
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
    deleteNode(head->next);
    printDLL(head);

    return 0;
}