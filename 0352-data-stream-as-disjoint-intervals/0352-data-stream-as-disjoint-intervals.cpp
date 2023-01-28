class SummaryRanges {
public:
    set<int> mp;
    SummaryRanges() {
        
    }
    
    void addNum(int value) {
        mp.insert(value);
    }
    
    vector<vector<int>> getIntervals() {
        vector<vector<int>> arr;
        int l = -1;
        int r = -1;
        
        for (auto i:mp){
            if (l<0){
                l = r = i;
            }
            else if(i==r + 1){
                r = i;
            }
            else {
                arr.push_back({l,r});
                l = r = i;
            }
        }
        arr.push_back({l,r});
        return arr;
    }
};

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */