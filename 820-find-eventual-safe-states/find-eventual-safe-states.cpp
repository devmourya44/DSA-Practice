class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        
        // BFS-Topological Sort, Kahn's Algo

        int n=graph.size();

        vector<int> adj[n];
        vector<int> indegree(n, 0);

        // reverse the node's edges
        for(int i=0;i<n;i++)
        {
            // from i->j
            // to j->i
            for(auto j: graph[i])
            {
                adj[j].push_back(i);
                indegree[i]++;
            }
        }

        // push nodes in queue with indegree 0
        queue<int> q;

        for(int i=0;i<n;i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
            }
        }

        vector<int> ans;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(auto i: adj[node])
            {
                indegree[i]--;
                if(indegree[i]==0){ q.push(i);}
            }
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};