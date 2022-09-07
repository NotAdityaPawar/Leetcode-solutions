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
    int pairSum(ListNode* head) {
        vector<int> nodes;
        while (head){
            nodes.push_back(head->val);
            head = head->next;
        }
        int i = 0;
        int ans = INT_MIN;
        int j = nodes.size()-1;
        
        while (i<j){
            ans = max(nodes[i] + nodes[j], ans);
            i++;
            j--;
        }
        return ans;
    }
};