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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* temp = head;

        while(temp != NULL) {
            count++;
            temp = temp->next;
        }

        int result = count - n;
        temp = head;

        if(count == n) {
            ListNode* newHead = temp->next;
            delete head;
            return newHead;
        }
        
        while(temp != NULL) {
            result--;
            
            if(result == 0) {
                break;
            }

            temp = temp->next;
        }
        ListNode* delNode = temp->next;
        temp->next = temp->next->next;
        delete delNode;
        return head;
    }
};