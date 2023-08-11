//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool dfs (int vertex, int par,vector<int> adj[], bool vis[]){
        vis[vertex]=true;
        bool isLoopexist= false;
        for(auto child:adj[vertex]){
            if(vis[child] && child==par) continue;
            if(vis[child]) return true;
            isLoopexist |= dfs(child, vertex, adj, vis);
        }
        return isLoopexist;
    }    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        bool vis[V]={false};
        bool loopExist;
        for(int i=0; i<V; ++i){
            if(!vis[i]){
                loopExist |= dfs(i,-1, adj, vis );
            }
        }
        return loopExist;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends