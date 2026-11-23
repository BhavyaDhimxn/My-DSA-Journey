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
BRUTE FORCE:

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        //Initialise a vector to store the odd numbers first and then the even numbers.
        vector<int> nums;

        //Edge Case: 0 or 1 node exist.
        if(head == NULL || head->next == NULL) return head;

        //For Odd:
        //Declare a temp node pointing to HEAD.
        ListNode* temp = head;
        //Traverse on the LL using temp.
        //Loop: Runs till the last odd node.
        while(temp != NULL && temp->next != NULL) {
            //Store node data into vector.
            nums.push_back(temp->val);
            //Move to the next node.
            temp = temp->next->next;
        }
        //Check if the last node after exiting loop exists and store its data.
        if(temp) nums.push_back(temp->val);

        //For Even:
        //Declare a temp node pointing to 2nd Node.
        temp = head->next;
        //Traverse on the LL using temp.
        //Loop: Runs till the last even node.
        while(temp != NULL && temp->next != NULL) {
            //Store node data into vector.
            nums.push_back(temp->val);
            //Move to the next node.
            temp = temp->next->next;
        }
        //Check if the last node after exiting loop exists and store its data.
        if(temp) nums.push_back(temp->val);

        //Initialise i for iteration.
        int i = 0;
        //Set temp back to HEAD.
        temp = head;
        //Run a loop till last node and update the node data.
        while(temp) {
            temp->val = nums[i];
            i++;
            temp = temp->next;
        }
        return head;
    }
};
*/

/*
OPTIMAL SOLUTION:
*/

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {

        //Edge Case: 0 or 1 node exist.
        if(head == NULL || head->next == NULL) return head;

        //Initialise 3 nodes:
        //Odd node pointing to the head.
        ListNode* odd = head;
        //Even node pointing to the 2nd node.
        ListNode* even = head->next;
        //Even Head node that will be used at the end as it will not change.
        ListNode* evenHead = head->next;

        //Loop: Runs till the last node.
        //Since even node is always ahead of odd node, no need to use odd node for loop.
        while(even != NULL && even->next != NULL) {
            //Point the nodes to the correct nodes.
            //Now all the odd->odd and even->even.
            odd->next = odd->next->next;
            even->next = even->next->next;

            //Move the nodes to the next odd/even node.
            odd = odd->next;
            even = even->next;
        }

        //Finally, connect the last odd node with the first even node.
        odd->next = evenHead;
        return head;
    }
};