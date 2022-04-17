check the gfg article for the anagram string, there are total 3 methods in it.
1. use the sort function to sort the string
2. use
3. https://leetcode.com/problems/valid-anagram/discuss/66519/2-C%2B%2B-Solutions-with-Explanations
​
```
def isAnagram(self, s: str, t: str) -> bool:
s = sorted(s)
t = sorted(t)
return s==t
```
4. Using the sort in python
​
```
class Solution:
def isAnagram(self, s: str, t: str) -> bool:
s = ''.join(sorted(s))
t = ''.join(sorted(t))
return s==t
```
​
5. More efficient using the dictionary
​
```
class Solution:
def isAnagram(self, s: str, t: str) -> bool:
dic1 = {}
dic2 = {}
for item in s:
dic1[item] = dic1.get(item,0)+1
for item in t:
dic2[item] = dic2.get(item,0) + 1
return dic1==dic2
```