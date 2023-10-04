//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int CountPS(char S[], int N);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        char S[N+1];
        cin>>S;
        cout<<CountPS(S,N)<<endl;
    }
    return 0;
}


// } Driver Code Ends


void helper(int left, int right, string s, int &ans)
{
    while(left >= 0 && right < s.size() && s[left] == s[right])
    {
        if((right-left+1) >= 2) ans++;
        left--;
        right++;
    }
}
int CountPS(char S[], int N)
{
    //code here
    int ans = 0;
    string s = S;
    for(int i = 0; i < s.size(); i++)
    {
        helper(i, i, s, ans);
        helper(i, i+1, s, ans);
    }
    return ans;
}