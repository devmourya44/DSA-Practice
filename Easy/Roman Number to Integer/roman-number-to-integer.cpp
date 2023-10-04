//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &s) {
        unordered_map<char, int> romanVals = {
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int num = romanVals[s.back()];
        for (int i = s.size() - 2; i >= 0; i--) {
            if (romanVals[s[i]] < romanVals[s[i + 1]]) {
                num -= romanVals[s[i]];
            } else {
                num += romanVals[s[i]];
            }
        }
        return num;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends