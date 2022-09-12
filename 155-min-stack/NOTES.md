using the `vector<pair<int,int>>`
​
```
vector<pair<int,int>> s;
MinStack() {
}
void push(int val) {
if (s.size()==0){
s.push_back({val,val});
}
else{
s.push_back({val,min(val,s.back().first)});
}
}
void pop() {
s.pop_back();
}
int top() {
return s.back().first;
}
int getMin() {
return s.back().second;
}
```