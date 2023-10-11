class Solution {
public:
    void dfs(int node,vector<int>adj[],vector<int>&vis)
    {
        vis[node]=1;
        for(auto j:adj[node])
        {
            if(vis[j]==0)
            dfs(j,adj,vis);
        }
    }
    int findCircleNum(vector<vector<int>>& roads) {
        int n=roads.size();
        vector<int>adj[n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(roads[i][j] && i!=j)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        vector<int>vis(n,0);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                ans++;
                dfs(i,adj,vis);
            }
        }
        return ans;
    }
};