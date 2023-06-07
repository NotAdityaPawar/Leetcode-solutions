class Solution {
public:
    string toLowerCase(string s) {
        string ans = "";
        for (auto i:s){
            if (i>='A' and i<='Z'){
                ans += (char)(i - 'A' + 'a');
            }
            else  ans += i;
        }
        return ans;
    }
};