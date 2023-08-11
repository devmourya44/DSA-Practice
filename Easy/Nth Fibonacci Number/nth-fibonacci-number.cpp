//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
     int MOD = 1000000007;
     int fib(int n, vector<int>& dp) {
        // Base case
        if (n <= 1) {
            return n;
        }
    
        // Check memoization
        if (dp[n] != -1) {
            return dp[n];
        }
    
        // Compute Fibonacci and store in dp
        dp[n] = fib(n - 1, dp) % MOD + fib(n - 2, dp) % MOD;
    
        return dp[n] % MOD;
    }

    int nthFibonacci(int n){
        // code here
        vector<int> dp(n+1, -1);
        return fib(n, dp);
    }

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends