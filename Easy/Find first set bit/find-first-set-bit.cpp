//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    
    unsigned int getFirstSetBit(int n)
    {
        if(n==2)return 2;
        if(n==1)return 1;
        long long int t = pow(2,int(log2(n)));
        if(n==t)return log2(n)+1;
        return getFirstSetBit(n-t);
    }
    
};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t; // testcases
    while(t--)
    {
        int n;
        cin>>n; //input n
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n)); // function to get answer
    }
	return 0;
}

// } Driver Code Ends