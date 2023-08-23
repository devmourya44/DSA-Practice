//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        
        string res;
        for(int i=0; i<S.size(); i++){
            if(S[i]=='.')  continue;
            string word;
            while(i<S.size() && S[i]!='.')  word += S[i++];
            if(res.empty())  res=word;
            else res = word+'.'+res;
        }
        return res;
    
    } 
};


//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends