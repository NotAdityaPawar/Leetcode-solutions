Using the two pass O(n) have to think about the one pass
​
```
ListNode* removeNthFromEnd(ListNode* head, int n) {
int len = 0;
ListNode* curr = head;
while (curr!=NULL){
len++;
curr = curr->next;
}
if (n==len) return head->next;
int i = 1;
for (curr = head;i<len-n;i++){
curr = curr->next;
}
curr->next = curr->next->next;
return head;
}
```
​
Tried using getting to nth node and deleting it
​
```
def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
count = 0
temp = head
while head:
if count==n:
break
head = head.next
count += 1
if head.next:
head.next = head.next.next
else:
head.next = None
​
return temp
```