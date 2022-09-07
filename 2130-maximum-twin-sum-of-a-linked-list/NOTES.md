Using the O(n) space and brute force
​
```
int pairSum(ListNode* head) {
vector<int> nodes;
while (head){
nodes.push_back(head->val);
head = head->next;
}
int i = 0;
int ans = INT_MIN;
int j = nodes.size()-1;
while (i<j){
ans = max(nodes[i] + nodes[j], ans);
i++;
j--;
}
return ans;
}
```