Using the dfs algo
​
```
void dfs(int node,vector<int>& vis,vector<int> adj[]){
vis[node] = 1;
for (auto it: adj[node]){
if (!vis[it]){
dfs(it,vis,adj);
}
}
}
public:
int findCircleNum(vector<vector<int>>& isConnected) {
int V = isConnected.size();
vector<int> adj[V];
for (int i=0;i<V;i++){
for (int j=0;j<V;j++){
if (isConnected[i][j]==1 && i!=j){
adj[i].push_back(j);
adj[j].push_back(i);
}
}
}
int ans = 0;
vector<int> vis(V+1,0);
for (int i=0;i<V;i++){