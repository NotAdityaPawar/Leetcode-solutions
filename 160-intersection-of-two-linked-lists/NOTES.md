Using the extream brute force by comparing all the nodes
​
```
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
ListNode *curr1 = headA;
ListNode* curr2 = headB;
while (curr1!=NULL){
curr2 = headB;
while(curr2!=NULL){
if (curr2==curr1){
return curr1;
}
curr2 = curr2->next;
}
curr1 = curr1 -> next;
}
return NULL;
}
```