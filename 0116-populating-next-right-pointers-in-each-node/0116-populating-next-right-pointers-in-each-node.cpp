/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if (root==NULL) return {};
        queue<Node*> q;
        q.push(root);
        while (q.empty()==false){
            int n = q.size();
            vector<Node*> arr;
            while (n--){
                auto temp = q.front();
                q.pop();
                
                arr.push_back(temp);
                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
            }
            for (int i = 0;i<arr.size()-1;i++){
                arr[i]->next = arr[i+1];
            }
            arr[arr.size()-1]->next = NULL;
        }
        return root;
    }
};