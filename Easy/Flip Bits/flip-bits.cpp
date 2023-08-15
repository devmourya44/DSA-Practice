//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxOnes(int a[], int n)
    {
        int maxSum , currSum , oneCnt;
        maxSum=currSum=oneCnt = 0;
       
        for(int i = 0; i<n; i++)
        {
            //before flipping
            if(a[i] == 1)
              oneCnt++;
            
            // AFTER FLIPING maximum no of zero after considering 0 as 1 and 1 as -1
            
            int val = a[i] == 0 ? 1:-1;
            currSum += val;
            maxSum = max(maxSum , currSum);
            if(currSum < 0) currSum = 0;  
        }
        return oneCnt + maxSum;
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}

// } Driver Code Ends