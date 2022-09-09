class Solution {
public:
    void func(int index,string s, vector<vector<string>> &ans,vector<string> &path){
        if (index==s.size()){
            ans.push_back(path);
            return;
        }
        for (int i=index;i<s.size();i++){
            if (ispalin(s,index,i)){
                path.push_back(s.substr(index,i-index+1));
                func(i+1,s,ans,path);
                path.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> path;
        func(0,s,ans,path);
        return ans;
    }
    bool ispalin(string s,int start,int end){
        while (start<=end){
            if (s[start++]!=s[end--]) return false;
        }
        return true;
    }
};