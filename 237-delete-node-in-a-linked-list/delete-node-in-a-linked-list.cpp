/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        //Copy the value of next node into the given.
        //Overwrite current node.
        node->val = node->next->val;
        //Create a temporary pointer pointing to the next node.
        //To delete next node in future, as our current node becomes the next node.
        ListNode* temp = node->next;
        //Make the current node point the next of next node.
        node->next = node->next->next;
        //Delete the next node that is floating
        delete temp;
    }
};