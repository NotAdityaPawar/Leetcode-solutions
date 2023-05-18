class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> res;
        vector<bool> IsIncomingExists(n,false);
        
        for (auto edge: edges){
            IsIncomingExists[edge[1]] = true;
        }
        
        for (int i = 0;i<n;i++){
            if (!IsIncomingExists[i]){
                res.emplace_back(i);
            }
        }
        
        return res;
    }
};