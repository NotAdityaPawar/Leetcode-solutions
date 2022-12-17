class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> s;
        
        for (auto i:tokens){
            if (i!="*" and i!="+" and i!="/" and i!="-"){
                s.push(stoi(i));
                continue;
            }
            else {
                long long b = s.top();
                s.pop();
                long long a = s.top();
                s.pop();
                
                if (i=="+")
                    s.push(a+b);
                else if (i=="-")
                    s.push(a-b);
                else if (i=="*")
                    s.push(a*b);
                else 
                    s.push((int)a/b);
            }
        }
        return s.top();
    }
};