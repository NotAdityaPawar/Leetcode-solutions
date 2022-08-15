class Solution {
public:
    int value(char c){
        switch(c){
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C' :return 100;
            case 'D': return 500;           
            case 'M' :return 1000;
        }
        return {};
    }
    int romanToInt(string s) {
        int ans = 0;
        
        for (int i=0;i<s.size();i++){
            int s1 = value(s[i]);
            if (i+1<s.size()){
                int s2 = value(s[i+1]);
                if (s1>=s2){
                    ans = ans + s1;
                }
                else{
                    ans = ans + s2-s1;
                    i++;
                }
            }
            else{
                ans = ans + s1;
            }
        }
        
        
        return ans;
    }
};