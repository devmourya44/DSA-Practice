//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){
        int n=q.size();
        vector<int>even;
        vector<int>odd;
        int i=0;
        while(i<n/2)
        {
            even.push_back(q.front());
            i++;
            q.pop();
        }
        i=n/2;
        while(i<n)
        {
            odd.push_back(q.front());
            i++;
            q.pop();
        }
        
        i=0;
        vector<int>ans;
        
        while(i<even.size())
        {
            
            ans.push_back(even[i]);
            ans.push_back(odd[i]);
            
            i++ ;
        }
        
        return ans ;
        
        
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        queue<int> q;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            q.push(a);
        }
        Solution ob;
        vector<int> ans=ob.rearrangeQueue(q);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
// } Driver Code Ends