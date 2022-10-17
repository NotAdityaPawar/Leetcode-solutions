class Solution {
public:
    bool checkIfPangram(string sentence) {
        if (sentence.size()<26){
            return false;
        }
        set<char> s;
        for (auto i:sentence){
            s.insert(i);
        }
        if(s.size()==26){
            return true;
        }
        else return false;
    }
};