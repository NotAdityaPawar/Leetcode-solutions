```
vector<int> hash;
MyHashMap() {
hash = vector<int>  (1000001,-1);
}
void put(int key, int value) {
hash[key] = value;
}
int get(int key) {
int ans = hash[key];
return ans;
}
void remove(int key) {
hash[key] = -1;
}
```