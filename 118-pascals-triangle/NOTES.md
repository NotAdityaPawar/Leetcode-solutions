use the ans(numRows) to declare the vector of fixed size
* will declare the fixed size with values zero
* resize(i+1) will resize the size to i+1
​
​
```
vector<vector<int>> ans(numRows);
for (int i=0;i<numRows;i++){
ans[i].resize(i+1);
ans[i][0] = ans[i][i] = 1;
for (int j=1;j<i;j++){
ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
}
}
return ans;
```
​
Using the dp python
```
def generate(self, numRows: int) -> List[List[int]]:
ans = [[1]* i for i in range(1,numRows+1)]
for i in range(1,numRows):
for j in range(1,i):
ans[i][j] = ans[i-1][j] + ans[i-1][j-1]
return ans
```