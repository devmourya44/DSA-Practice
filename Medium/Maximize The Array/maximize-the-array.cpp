//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> maximizeArray(int arr1[], int arr2[], int n) {
        set<int> st;
        priority_queue<int> q;
        map<int,bool>mp,mp2;
        vector<int> ans;
        
        for(int i=0;i<n;i++){
            st.insert(arr1[i]);
            st.insert(arr2[i]);
        }
        
        for(auto i: st){
            q.push(i);
        }
        
        for(int i=0;i<n;i++){
            mp[q.top()]=true;
            q.pop();
        }
        
        for(int i=0;i<n;i++){
            if(mp[arr2[i]]&&mp2[arr2[i]]!=true){
                ans.push_back(arr2[i]);
            }
            mp2[arr2[i]]=true;
        }
        for(int i=0;i<n;i++){
            if(mp[arr1[i]]&&mp2[arr1[i]]!=true){
                ans.push_back(arr1[i]);
            }
            mp2[arr1[i]]=true;
        }

        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr1[n], arr2[n];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        auto ans = ob.maximizeArray(arr1, arr2, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends