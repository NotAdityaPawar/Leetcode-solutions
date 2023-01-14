class Solution {
public:
    bool detectCapitalUse(string word) {
        bool first = (isupper(word[0])? true: false);
        int n = word.size();
        if (n==1) return true;
        int cnt = 0;
        for (int i=1;i<n;i++){
            if (isupper(word[i]))cnt++;
        }
        
        if (first and cnt==0) return true;
        if (cnt==0 and first ==false) return true;
        if (cnt==n-1 and first) return true;
        return false;
        
        
    }
};