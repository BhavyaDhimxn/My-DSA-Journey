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
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //Create a dummy node for final returning.
        ListNode* dummyNode = new ListNode();
        //Store it as current node for traversal.
        ListNode* current = dummyNode;
        //Store the HEADS of the given LLs.
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        //Initialise carry to track the carry over digit after summation.
        int carry = 0;

        //Loop -> Runs till the last node of max length LL.
        while(temp1 != NULL || temp2 != NULL) {
            //Initialise sum in every iteration with the carry over digit.
            int sum = carry;
            //Add the digits of given LLs to it.
            if(temp1) sum += temp1->val;
            if(temp2) sum += temp2->val;

            //Create new node with unit place digit of sum.
            ListNode* newNode = new ListNode(sum % 10);
            //Update carry with carry over digit.
            carry = sum / 10;

            //Point the dummy to this node.
            current->next = newNode;
            //Make this new node the current node.
            current = current->next;

            //If nodes in either exist move to the next.
            if(temp1 != NULL) temp1 = temp1->next;
            if(temp2 != NULL) temp2 = temp2->next;
        }
        //If carry has a value after complete traversal, add it as the last node.
        if(carry) {
            ListNode* newNode = new ListNode(carry);
            current->next = newNode;
        }
        //return the required HEAD.
        return dummyNode->next;
    }
};