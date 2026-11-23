/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

/*
OPTIML APPROACH:
*/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //Fast points to HEAD.
        ListNode* fast = head;
        //Loop: Runs for n times.
        for(int i = 1; i <= n; i++) {
            //Moves temp to the nth node from the start.
            fast = fast->next;
        }

        //Edge Case: If fast is null -> n = no. nodes -> HEAD to be removed.
        if(fast == NULL) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        //Slow points to HEAD.
        ListNode* slow = head;

        //Loop: Runs till fast reaches last node.
        while(fast->next != NULL) {
            //Move both pointers.
            //Slow will reach (n - 1)th node.
            slow = slow->next;
            fast = fast->next;
        }
        
        //Same as Brute force method.
        ListNode* delNode = slow->next;
        slow->next = slow->next->next;
        delete delNode;
        return head;
    }
};

/*

BRUTE FORCE APPROACH:

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //Keep a counter to get no. of nodes.
        int count = 0;
        //Create temp pointing to head.
        ListNode* temp = head;

        //Loop: Run till temp is null.
        while(temp != NULL) {
            //Increment count to get the no. of nodes.
            count++;
            //Move temp to next node.
            temp = temp->next;
        }

        //Resultant gives us (n - 1)th node, where we want to be.
        int result = count - n;
        //Reset temp poining to head.
        temp = head;

        //Edge Case: If head is the node to be removed.
        if(count == n) {
            ListNode* newHead = temp->next;
            delete head;
            return newHead;
        }
        
        //Loop: Runs till result = 0;
        while(temp != NULL) {

            result--;
            
            if(result == 0) {
                break;
            }

            temp = temp->next;
        }

        //Store the delNode.
        ListNode* delNode = temp->next;
        //Change the link.
        temp->next = temp->next->next;
        //Delete the nth node.
        delete delNode;
        return head;
    }
};
*/