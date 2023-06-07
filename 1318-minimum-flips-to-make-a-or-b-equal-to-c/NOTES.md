```
class Solution {
public:
int minFlips(int a, int b, int c) {
int ans = 0;
while (a or b or c){
int ta = a&1; // terminal bit of a
int tb = b&1; // terminal bit of b
int tc = c&1; // terminal bit of c
bool temp = ta || tb;
if (tc==0 and ta==1 and tb==1) ans+=2;
else if (tc!=temp) ans++;
c >>=1;
a>>=1;
b>>=1;
}
return ans;
}
};``
```