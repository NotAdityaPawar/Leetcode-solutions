class Solution {
public:
    int dist[100005];
    int ans=1;
    void dfs(int u,string& s,vector<vector<int>>& adj)
    {
        dist[u]=1;
        for(int i=0;i<adj[u].size();i++)
        {
            dfs(adj[u][i],s,adj);
            if(s[u]!=s[adj[u][i]])
            {
                ans=max(ans,dist[u]+dist[adj[u][i]]);
                dist[u]=max(dist[u],dist[adj[u][i]]+1);
            }
        }
    }
    int longestPath(vector<int>& parent, string s) {
        int n=parent.size();
        vector<vector<int>>adj(n);
        for(int i=1;i<n;i++)
        {
            adj[parent[i]].push_back(i);
        }
        dfs(0,s,adj);
        return ans;
    }
};