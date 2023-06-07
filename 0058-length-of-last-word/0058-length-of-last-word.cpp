class Solution {
public:
    int lengthOfLastWord(string s) {
        int tail= s.size()-1;
        int cnt = 0;
        while (tail>=0 and s[tail]==' ') tail--;
        while (tail>=0 and s[tail]!=' '){
            cnt++;
            tail--;
        }
        return cnt;
    }
};