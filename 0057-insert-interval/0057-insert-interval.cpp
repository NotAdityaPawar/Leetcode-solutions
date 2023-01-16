class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        
        intervals.push_back(newInterval);
        sort(begin(intervals),end(intervals));
        
        vector<int> temp = intervals[0];
        
        for (auto &i: intervals){
            if (i[0]<=temp[1]){
                temp[1] = max(temp[1],i[1]);
            }
            else {
                ans.push_back(temp);
                temp = i;
            }
        }
        ans.push_back(temp);
        return ans;
    }
};