//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxLength(string S){
        int maxLen = 0;
        stack<int> stk;
        stk.push(-1); // Initialize with -1 to handle cases where the first character is ')'
    
        for (int i = 0; i < S.length(); i++) {
            if (S[i] == '(') {
                stk.push(i);
            } else {
                stk.pop();
                if (!stk.empty()) {
                    maxLen = max(maxLen, i - stk.top());
                } else {
                    stk.push(i); // If the stack becomes empty, push the current index as the new starting point
                }
            }
        }
    
        return maxLen;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.maxLength(S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends