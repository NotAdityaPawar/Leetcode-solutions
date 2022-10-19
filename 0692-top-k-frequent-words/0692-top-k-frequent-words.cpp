class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp;
        for(string &word : words) mp[word]++;
        
        typedef pair<string, int> P;
        auto comp = [](const P &a, const P &b)->bool{
            if(a.second == b.second) return a.first > b.first;
            else return a.second < b.second;
        };
        priority_queue<P, vector<P>, decltype(comp)> que(comp);
        
        for(auto &p : mp) que.push(p);
        
        vector<string> ans;
        while(que.size() && k--){
            auto p = que.top();
            que.pop();
            ans.push_back(p.first);
        }
        return ans;
    }
};