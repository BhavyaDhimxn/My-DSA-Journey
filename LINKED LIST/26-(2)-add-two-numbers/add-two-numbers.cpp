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
        //Initialise carry to track the carry over digit after summation.
        int carry = 0;

        //Loop -> Runs till the last node of max length LL or till carry has a value.
        while(l1 != NULL || l2 != NULL || carry != 0) {
            //Initialise sum in every iteration with the carry over digit.
            int sum = carry;

            //If nodes in either LLs exist add the digits of given LLs to it.
            //Move to the next node.
            if(l1){
                sum += l1->val;
                l1 = l1->next;
            } 
            if(l2){
                sum += l2->val;
                l2 = l2->next;
            }

            //Create new node with unit place digit of sum.
            ListNode* newNode = new ListNode(sum % 10);
            //Update carry with carry over digit.
            carry = sum / 10;

            //Point the dummy to this node.
            current->next = newNode;
            //Make this new node the current node.
            current = current->next;
        }
        //return the required HEAD.
        return dummyNode->next;
    }
};