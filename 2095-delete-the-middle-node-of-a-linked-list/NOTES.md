use the slow and fast pointer technique
​
```
ListNode* deleteMiddle(ListNode* head) {
if (head->next==NULL){
return NULL;
}
ListNode* slow = head;
ListNode* fast = head->next->next;
while (fast and fast->next){
fast = fast->next->next;
slow = slow->next;
}
slow->next = slow->next->next;
return head;
}
```