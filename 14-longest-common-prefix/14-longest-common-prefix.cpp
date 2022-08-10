class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        
        string ans = "";
        string a = strs[0];
        string b = strs[strs.size()-1];
        
        int s = max(a.size(),b.size());
        
        for (int i=0;i<s;i++){
            if (a[i]!=b[i]){
                break;
            }
            ans += a[i];
        }
        return ans;
    }
};