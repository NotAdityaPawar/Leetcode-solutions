class Solution {
public:
    static int compare(string a,string b){
        string ab = a.append(b);
        string ba = b.append(a);
        
        return ab.compare(ba)>0?1:0;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> arr;
        for (auto i: nums){
            arr.push_back(to_string(i));
        }
        
        sort(arr.begin(),arr.end(),compare);
        
        
        string ans = "";
        for (auto i: arr){
            ans += i;
        }
        return ans[0]=='0'?"0":ans;
    }
};