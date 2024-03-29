//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:

    void solve(int i,int n,string temp,string &s,vector<string> &ans)
    {
        if(i==n)
        {
            ans.push_back(temp);
            return;
        }
        if(i==0) solve(i+1,n,temp+s[i],s,ans);
        else
        {
            solve(i+1,n,temp+' '+s[i],s,ans);
            solve(i+1,n,temp+s[i],s,ans);
        }
    }
    vector<string> permutation(string S){
        // Code Here
        vector<string> ans;
        string temp="";
        int n=S.size();
        solve(0,n,temp,S,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}

// } Driver Code Ends