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

Node* removeKth(Node* head, int k) {
    if(head == NULL) return head;
    if(k == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    int count = 0;
    Node* previous = NULL;
    Node* temp = head;
    while(temp) {
        count++;
        if(count == k) {
            previous->next = previous->next->next;
            delete temp;
            break;
        }
        previous = temp;
        temp = temp->next;
    }
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

    Node* ans = removeKth(head, 3);
    printList(ans);

    return 0;
}