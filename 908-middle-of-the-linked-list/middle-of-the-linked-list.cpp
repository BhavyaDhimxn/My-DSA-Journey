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
OPTIMAL APPROACH:
*/

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        //Create slow and fast pointers pointing to HEAD
        ListNode* slow = head;
        ListNode* fast = head;

        //Loop: Runs till fast reaches last node(even nodes) or NULL(odd nodes).
        while(fast != NULL && fast->next != NULL) {
            //Slow moves half of fast.
            slow = slow->next;
            //When fast reaches end, slow is at middle node.
            fast = fast->next->next;
        }
        return slow;
    }
};

/*
BRUTE FORCE APPROACH:

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        //Create temp pointing to HEAD and a counter for no. of nodes.
        ListNode* temp = head;
        int count = 0;

        //Loop: Runs till the last node.
        //Traverse and get the count
        while(temp != NULL) {
            count++;
            temp = temp->next;
        }

        //Middle node position is always the (n/2) + 1.
        int midNode = (count/2) + 1;
        temp = head;

        //Loop: Runs till the last node.
        while(temp != NULL) {
            //Decrease by when as when midNode value is zero -> arrived at middle node.
            midNode--;

            if(midNode == 0) break;

            temp = temp->next;
        }

        return temp;

    }
};
*/
