//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	    unordered_set<char> set;
        string h="";
        for(int i=0;i<str.length();i++)
        {
            if(set.find(str[i])==set.end())
            {
                h += str[i];
                set.insert(str[i]);
            }
        }
        return h;
	}	
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends