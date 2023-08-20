//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
    //code here.
    map<char,int>mp;
    string ans = "";
    for(int i=0; i<s.length(); i++){
        if(mp.find(s[i])!=mp.end()){
            ans += s[i];
            return ans;
        }
        
        mp[s[i]]++;
    }
    
    return "-1";
}