//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    
   void solve(int l,int r,string s,vector<string>&ans)
    {
        if(l==r)
        {
            ans.push_back(s);
            return;
        }
        for(int i=l;i<=r;i++)
        {
            swap(s[l],s[i]);
            solve(l+1,r,s,ans);
            swap(s[l],s[i]);
        }
    }
    vector<string> permutation(string S)
    {
        vector<string>ans;
        int n=S.size();
        solve(0,n-1,S,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends