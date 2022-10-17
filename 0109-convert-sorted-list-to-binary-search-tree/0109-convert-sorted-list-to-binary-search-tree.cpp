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
        vector<int> arr;
        while (head){
            arr.push_back(head->val);
            head = head->next;
        }
        return build(arr,0,arr.size());
    }
    
    TreeNode* build(vector<int> arr,int l,int r){
        if (l==r) return NULL;
        int mid = (l+r)/2;
        TreeNode* root = new TreeNode(arr[mid]);
        root->left = build(arr,l,mid);
        root->right = build(arr,mid +1,r);
        return root;
    }
};