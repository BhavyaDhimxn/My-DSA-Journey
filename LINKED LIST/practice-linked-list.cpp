#include<iostream>
#include<vector>
using namespace std;

//Create -> Custom DS using class.
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

//Create -> LL from Array.
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

/*
Traverse the LL.
Questions like Count nodes/Check element present -> involve traversal of LL.
vector<int> traverseLL(Node* head) {
    Node* temp = head;
    vector<int> nums;

    while(temp) {
        nums.push_back(temp->data);
        temp = temp->next;
    }
    return nums;
}
*/

//Deletion of HEAD from LL.
Node* deleteHead(Node* head) {
    if(head == NULL) return head;
    Node* temp = head;

    head = head->next;
    delete temp;
    return head;
}

//Deletion of TAIL from LL.
Node* deleteTail(Node* head) {
    if(head == NULL || head->next == NULL) return head;
    Node* temp = head;

    while(temp->next->next != NULL) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

//Print the LL.
void printList(Node* head) {
    Node* temp = head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    Node* head = convertArrayToLL(nums);

    cout << head->data << endl;
    cout << head->next << endl;

    // Delete head (removes '1')
    head = deleteHead(head);
    cout << "After deleting head: ";
    printList(head);

    // Delete tail (removes '5')
    head = deleteTail(head);
    cout << "After deleting tail: ";
    printList(head);

    return 0;
}