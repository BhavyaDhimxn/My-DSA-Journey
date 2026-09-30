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

    /*
    Variation 1:

    void deleteNode(ListNode* node) {
        //Store next node.
        ListNode* front = node->next;
        //Overwrite given node's val with next node's val.
        node->val = front->val;
        //Point given node to what the next node points.
        node->next = front->next;
    }
    */

    void deleteNode(ListNode* node) {
        //Copy the value of next node into the given.
        //Overwrite current node.
        node->val = node->next->val;
        //Create a temporary pointer pointing to the next node.
        //To delete next node in future, as our current node becomes the next node.
        //Not compulsory as we do not need to remove it from memory.
        //ListNode* temp = node->next;
        //Make the current node point the next of next node.
        node->next = node->next->next;
    }
};