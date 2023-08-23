//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int maxDepth(string s) {
       int ans=0;
    	int maxans = INT_MIN;
    	for(int i=0;i<s.size();i++)
    	{
    		if(s[i]=='(')
    		ans++;
    		else if(s[i]==')')
    		ans--;
    
    		maxans= max(ans,maxans);
    	}
    	return maxans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution obj;
        int ans = obj.maxDepth(s);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends