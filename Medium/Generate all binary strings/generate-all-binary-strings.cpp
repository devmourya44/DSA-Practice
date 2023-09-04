//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void solve(int num, string s, int pre){
        if(s.length() == num){
            cout << s << " ";
            return;
        }
        solve(num, s+'0', 0);
        if(pre != 1){
            solve(num, s + '1', 1);
        }
    }
    void generateBinaryStrings(int num){
        solve(num, "", 0);
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        obj.generateBinaryStrings(n);
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends