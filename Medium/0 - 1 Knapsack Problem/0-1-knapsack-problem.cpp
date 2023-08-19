//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int dp[1000][1001];
    int memo(int ind ,int weight,int wt[], int val[])
    {
          if(weight==0)  return 0;
          if(ind==0){
              if(wt[0] <= weight){
                  return val[0];
              }
              else{
                  return 0;
              }
          }
          if(dp[ind][weight] !=-1) return dp[ind][weight];
           int not_take = 0 + memo(ind-1,weight,wt,val);
           int take =INT_MIN;
           if(wt[ind]<=weight){
               take= val[ind]+memo(ind-1,weight-wt[ind],wt,val);
           }
           return dp[ind][weight]=max(not_take ,take);
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
         memset(dp,-1,sizeof(dp));
         return memo(n-1,W,wt,val);
    }

};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends