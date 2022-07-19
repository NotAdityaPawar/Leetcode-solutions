use the ans(numRows) to declare the vector of fixed size
* will declare the fixed size with values zero
* resize(i+1) will resize the size to i+1
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