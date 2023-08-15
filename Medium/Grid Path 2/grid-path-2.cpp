//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int n, m;
    vector<vector<long long>> dp;
    long long numsPaths(int i, int j, vector<vector<int>>& obstacleGrid)
    {       
        if (dp[i][j]!=-1) return dp[i][j];
        if (obstacleGrid[i][j]==1) return dp[i][j]=0;
        long long ans=0;
        if (i>0) ans+=numsPaths(i-1, j, obstacleGrid);
        if (j>0) ans+=numsPaths(i, j-1, obstacleGrid);
        if (i==0 && j==0) ans=(obstacleGrid[0][0]==0)?1:0;
        return dp[i][j]=ans%1000000007;     
    }
    int totalWays(int n, int m, vector<vector<int>>& obstacleGrid) {
       n=obstacleGrid.size();
        m=obstacleGrid[0].size();
        dp.assign(n, vector<long long>(m, -1));

        return numsPaths(n-1, m-1, obstacleGrid)%1000000007;
    }
};
    

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int i = 0; i < m; ++i) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            grid.push_back(temp);
        }

        Solution obj;
        cout << obj.totalWays(n, m, grid) << "\n";
    }
    return 0;
}
// } Driver Code Ends