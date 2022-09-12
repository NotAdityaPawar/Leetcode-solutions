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
    int maxDepth(Node* root) {
        if (root==NULL) return 0;
        int ans =0;
        queue<Node*> q;
        q.push(root);
        while (q.empty()==false){
            int t = q.size();
            while (t--){
                auto temp = q.front();
                q.pop();
                for (auto i: temp->children){
                    q.push(i);
                }
                
            }
            ans++;
        }
        return ans;
    }
};