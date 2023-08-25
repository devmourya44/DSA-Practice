//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void solve(vector<int>& v,int n){
      
        v.push_back(n);
          
        if(n<=0){
          return;
        }

        solve(v,n-5);
        v.push_back(n);
        
    }
  

    vector<int> pattern(int N){
        
        vector<int> v;
        
        solve(v,N);
        
        return v;
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
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends