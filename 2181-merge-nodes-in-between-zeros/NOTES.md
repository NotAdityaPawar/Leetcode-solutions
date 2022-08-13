Using two pointers
​
​
```
ListNode* mergeNodes(ListNode* head) {
ListNode* p1 = head;
ListNode* p2 = head;
int sum = 0;
while (p1!=NULL and p2!=NULL){
if (p2->val==0){
p1->val = sum;
p1->next= p2->next;;
p1 = p1->next;
sum = 0;
}
sum += p2->val;
p2 = p2->next;
}
return head->next;
}
```