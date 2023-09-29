//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void move(vector<vector<int>> &grid,int i,int j){
        int r=grid.size();
        int c=grid[0].size();
        if(i<0 || i==r || j<0 || j==c || grid[i][j]==0){
            return;
        }
        grid[i][j]=0;
        // moves krne ke liye inner matrix mai
        move(grid,i+1,j);
        move(grid,i-1,j);
        move(grid,i,j+1);
        move(grid,i,j-1);
        return;
    }
    int numberOfEnclaves(vector<vector<int>> &grid) {
        // Code here
        int counter=0;
        int r=grid.size();
        int c=grid[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                // boundary elements h and uspe bhi 1 h than vo move krega inner matrix ke taraf
                if((i==0 || j==0 ||i==r-1 || j==c-1) && grid[i][j]==1)
                move(grid,i,j);
            }
        }
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==1){
                    counter++;
                }
            }
        }
        return counter;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends