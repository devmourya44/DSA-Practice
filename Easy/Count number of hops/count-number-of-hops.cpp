//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    long long mod=1e9+7;
    long long f(int n,vector<long long>&dp){
         if (n<0){
            return 0;
        }
        if (n==0){
            return 1;
        }
        if (dp[n]==-1){
            dp[n]=f(n-1,dp)%mod+f(n-2,dp)%mod+f(n-3,dp)%mod;
            
        }
      
       return dp[n]%mod;
    }
    //Function to count the number of ways in which frog can reach the top.
   
    long long countWays(int n)
    {
        
        // your code here
        vector<long long>dp(n+1,-1);
          
        return f(n,dp)%mod;
        
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