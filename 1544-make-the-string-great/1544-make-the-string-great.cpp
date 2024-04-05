class Solution {
public:
    string makeGood(string s) {
        string ans = "";
        int n = s.size();
        for (int i =0;i<s.size();i++){
            ans += s[i];
            
            while (ans.size() and (s[i+1]+32==ans.back() or s[i+1]-32 == ans.back())){
                ans.pop_back();
                i++;
            }
            
        }
        return ans;
    }
};