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
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* entry = head;
        
        while (fast!=NULL and fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            
            if (slow==fast){
                while (entry!=slow){
                    slow = slow->next;
                    entry = entry->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};