//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        
        vector<int> v;
        int m = INT_MIN;
        for(int i = 0; i < k; i++) {
            m = max(m, arr[i]);
        }
        v.push_back(m);
        for(int i = 1; i <= n-k; i++) {
            if(m == arr[i-1]){
                m = INT_MIN;
                for(int j = i; j < i+k; j++) {
                    m = max(m, arr[j]);
                }
            }else {
                m = max(m, arr[i+k-1]);
            }
            v.push_back(m);
        }
        return v;
    
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}
// } Driver Code Ends