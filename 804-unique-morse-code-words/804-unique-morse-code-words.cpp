class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>  d = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        
        unordered_set<string> s;
        for (auto i: words){
            string temp = "";
            for (auto c:i){
                temp += d[c-'a'];
            }
            s.insert(temp);
        }
        
        return s.size();
    }
};