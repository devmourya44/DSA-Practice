//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        vector<vector<int>>ans;
        
        if (arr.empty())
        return ans;
        
        int n = arr.size();
        
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int target = k - arr[i] - arr[j];
                int start = j+1;
                int end = n-1;
                
                while(start < end)
                {
                    if(arr[start] + arr[end] > target)end--;
                    else if(arr[start] + arr[end] < target)start++;
                    else {
                        vector<int>quad(4,0);
                        quad[0] = arr[i];
                        quad[1] = arr[j];
                        quad[2] = arr[start];
                        quad[3] = arr[end];
                        ans.push_back(quad);
                        
                        while(start < end && arr[start] == quad[2])start++;
                        while(start < end && arr[end] == quad[3])end--;
                    }
                }
                while(j+1 < n && arr[j+1] == arr[j])j++;
            }
            while(i+1 < n && arr[i+1] == arr[i])i++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends