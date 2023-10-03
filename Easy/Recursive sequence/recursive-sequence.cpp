//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long sequence(int n){
        long long prod=1;
        if(n==1) return prod;
        
        long long  s = (n*(n-1))/2;
        for(long i=s+1;i<=s+n;i++){
            prod = prod * i;
        }
        
        return sequence(n-1)+prod;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends