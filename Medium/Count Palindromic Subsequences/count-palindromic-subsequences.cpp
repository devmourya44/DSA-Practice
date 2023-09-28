//{ Driver Code Starts
// Counts Palindromic Subsequence in a given String
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    long long int mod =1e9+7;
    
    /*You are required to complete below method */
    long long int  countPS(string str)
    {
       //Your code here
       int n = str.length();
       vector<vector<long long int>> dp(n,vector<long long int>(n,0));
       for(int i=0;i<n;i++)
       dp[i][i]=1;
       
       for(int i=n-1;i>=0;i--)
       {
           for(int j=i+1;j<n;j++)
           {
                long long int num=0;
                num = (dp[i][j-1]%mod + dp[i+1][j]%mod)%mod;
        
                if(str[i]==str[j]) num=(num+1)%mod;
        
                else num = (num - dp[i+1][j-1])%mod;
                dp[i][j] = num<0 ? num+mod : num;
           }
       }
       
       return dp[0][n-1]; 
    }
     
};

//{ Driver Code Starts.
// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        Solution ob;
        long long int ans = ob.countPS(str);
        cout<<ans<<endl;
    } 
}
// } Driver Code Ends