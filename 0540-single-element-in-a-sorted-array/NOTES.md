Usign the binary search
​
```
int singleNonDuplicate(vector<int>& nums) {
int left = 0;
int right = nums.size()-1;
int mid;
while (left<right){
mid = (left + right)/2;
if ((mid%2==1 and nums[mid-1]==nums[mid]) or(mid%2==0 and nums[mid+1]==nums[mid])){
left = mid + 1;
}
else{
right = mid;
}
}
return nums[left];
}
```