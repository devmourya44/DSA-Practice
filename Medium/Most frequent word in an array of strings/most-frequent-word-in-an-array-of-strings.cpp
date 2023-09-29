//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
    public:
    //Function to find most frequent word in an array of strings.
    string mostFrequentWord(string arr[], int n) 
    {
        // code here
        unordered_map<string, int> mp;
        int maxi = -1;
        for(int i = 0; i < n; ++i) {
            mp[arr[i]]++;
            maxi = max(maxi, mp[arr[i]]); 
        }
        
        int cnt = 0;
        unordered_map<string, int> mp2;
        
        string ans;
        for(int i = n-1; i >= 0; --i) {
            if(mp[arr[i]] == maxi) {
                mp2[arr[i]]++;
                ans = arr[i];
            }
        }
        
        cnt = mp2.size();

        
        if(cnt == 1) return ans;
        else {
            cnt--;
            for(int i = n-1; i >= 0; --i) {
                if(mp[arr[i]] == maxi) {
                    mp2[arr[i]]--;
                    if(mp2[arr[i]] == 0) return arr[i];
                }
            }
        }
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.mostFrequentWord(arr, n) << endl;
    }
    return 0;
}

// } Driver Code Ends