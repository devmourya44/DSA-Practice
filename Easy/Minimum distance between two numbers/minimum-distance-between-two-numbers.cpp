//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        int ind = 0;
        int mn_diff = INT_MAX;
        int ptrx = -1, ptry = -1;
        
        while(ind < n){
            if(a[ind] == x) ptrx = ind;
            if(a[ind] == y) ptry = ind;
            if(ptrx != -1 && ptry != -1){
                mn_diff = min(mn_diff , abs(ptrx - ptry));
            }
            ind++;
        }
        
        return (mn_diff == INT_MAX ? -1 : mn_diff);
    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends