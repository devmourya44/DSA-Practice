//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long mod = 1e9 + 7;
    
    long long solve(int n, vector<long long> &dp) {
        if(n == 0 or n == 1)
            return 1;
        
        if(n == 2)
            return 2;
            
        if(dp[n] != -1)
            return dp[n];
        
        return dp[n] = (solve(n - 1,dp) + solve(n - 2,dp) + solve(n - 3,dp)) % mod;
    }
    
    long long countWays(int n) {
    // RECURSION + MEMOIZATION
        vector<long long> dp(n + 1, -1);
        return solve(n, dp);
        
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends