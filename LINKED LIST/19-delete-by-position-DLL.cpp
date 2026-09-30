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
    if(head == NULL || head->next == NULL) return NULL;
    Node* temp = head;
    head = head->next;
    head->prev = nullptr;
    temp->next = nullptr;
    delete temp;
    return head;
}

Node* deleteTail(Node* head) {
    if(head == NULL || head->next == NULL) return NULL;
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    Node* newTail = temp->prev;
    newTail->next = nullptr;
    temp->prev = nullptr;
    delete temp;
    return head;
}

Node* deleteByPosition(Node* head, int k) {
    //Edge Case: If no node exists -> nothing to delete -> return null.
    if(head == NULL) return NULL;
    //Keep a counter for later comparison with k.
    int count = 0;
    //Store head in temp.
    Node* temp = head;
    //Loop: Runs till we reach the kth node.
    while(temp) {
        count++;
        if(count == k) break;
        temp = temp->next;
    }
    //Store the front node and the back nodes wrt Kth node
    Node* front = temp->next;
    Node* back = temp->prev;
    //Edge Case: If one node exists.
    if(front == NULL && back == NULL) {
        return NULL;
    }
    //Edge Case: If k is HEAD.
    else if(back == NULL) return deleteHead(head);
    //Edge Case: If k is TAIL.
    else if(front == NULL) return deleteTail(head);
    //Edge Case: If k lies in between 2 nodes.
    //Connect back node with front.
    back->next = front;
    //Connect front node with back.
    front->prev = back;
    //Point the next and prev of kth node to null.
    temp->next = nullptr;
    temp->prev = nullptr;
    //Delete the node.
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
    Node* newHead = deleteByPosition(head, 5);
    printDLL(newHead);

    return 0;
}