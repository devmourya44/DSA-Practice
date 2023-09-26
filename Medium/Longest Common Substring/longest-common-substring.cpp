//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    bool vf(string&num1,string&num2,int len){
        for(int i=0;i<=num1.size()-len;i++){
            if(num2.find(num1.substr(i,len))!=-1)
                return true;
        }
        return false;
    }
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        // your code here
        int L=1,R=min(S1.size(),S2.size()),ans=0;
        while(L<=R){
            int mid=(L+R)/2;
            if(vf(S1,S2,mid)){
                ans=mid;
                L=mid+1;
            }
            else 
                R=mid-1;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends