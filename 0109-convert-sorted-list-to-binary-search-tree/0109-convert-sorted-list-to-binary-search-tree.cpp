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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if (head==NULL) return NULL;
        return build(head,NULL);
    }
    TreeNode* build(ListNode* head,ListNode* tail){
        if (head==tail) return NULL;
        ListNode* fast = head;
        ListNode* slow = head;
        
        while (fast!=tail and fast->next!=tail){
            fast = fast->next->next;
            slow = slow->next;
        }
        TreeNode *root = new TreeNode(slow->val);
        root->left = build(head,slow);
        root->right = build(slow->next,tail);
        return root;
    }
};