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

    /*
    BRUTE FORCAE APPROACH:

    ListNode* reverseList(ListNode* head) {
        //Edge Case: If LL is empty;
        if(head == NULL) return NULL;
        //Store the HEAD and declare a stack.
        ListNode* temp = head;
        stack<int> st;
        
        //Loop: Runs till the last node.
        while(temp != NULL) {
            //Push the element into the stack.
            st.push(temp->val);
            //Go to the next node.
            temp = temp-> next;
        }
        //Reset temp.
        temp = head;
        //Loop: Runs till the last node.
        while(temp != NULL) {
            //Overwrite the element with topmost element in stack
            temp->val = st.top();
            //Pop the topmost after its been placed.
            st.pop();
            //Move to the next node.
            temp = temp->next;
        }
        return head;
    }
    */

    /*
    OPTIMAL APPROACH:
    */
    ListNode* reverseList(ListNode* head) {
        //Edge Case: if no node in LL.
        if(head == NULL) return NULL;
        //Store the current, prev and next nodes.
        ListNode* current = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;

        //Loop -> Reach the last node.
        while(current != NULL) {
            //Store the next node.
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }
};