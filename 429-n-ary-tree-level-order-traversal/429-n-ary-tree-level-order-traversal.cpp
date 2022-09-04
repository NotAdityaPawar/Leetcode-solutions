/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if (root==NULL){
            return {};
        }
        vector<vector<int>> ans;
        queue<Node*> q;
        q.push(root);
        
        while (q.empty()==false){
            int s = q.size();
            vector<int> temp_ans;
            while (s--){
                Node* temp = q.front();
                q.pop();
                temp_ans.push_back(temp->val);
                
                
                
                for (auto i: temp->children){
                    q.push(i);
                }
                
            }
            ans.push_back(temp_ans);
            
        }    
        return ans;
    }
};