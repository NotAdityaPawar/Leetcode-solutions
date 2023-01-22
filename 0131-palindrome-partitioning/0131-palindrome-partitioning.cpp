class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> path;
        fun(s,0, path,ans);
        return ans;
    }
    void fun(string s, int ind,vector<string>& path, vector<vector<string>> &ans){
        if (ind==s.size()){
            ans.push_back(path);
            return;
        }
        
        for(int i =ind;i<s.size();i++){
            if (ispalin(s,ind,i)){
                path.push_back(s.substr(ind,i-ind+1));
                fun(s,i+1,path,ans);
                path.pop_back();
            }
        }
    }
    
    bool ispalin(string s, int start,int end){
        while (start<=end){
            if (s[start]!=s[end]) return false;
            start++;
            end--;
        }
        return true;
    }
};