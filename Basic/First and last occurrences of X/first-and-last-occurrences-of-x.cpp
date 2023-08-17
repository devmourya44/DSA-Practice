//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int firstOcc(vector<int>& arr, int n, int key) {
        int s = 0, e = n-1;
        int mid = s + (e-s)/2;
        int ans = -1;
        while(s<=e) {
                if(arr[mid] == key){
                    ans = mid;
                    e = mid - 1;
                }
                else if(key > arr[mid]) {//Right me jao
                    s = mid + 1;
                }
                else if(key < arr[mid]) {//left me jao
                    e = mid - 1;
                }
            mid = s + (e-s)/2;
        }
        return ans;
    }

    int lastOcc(vector<int>& arr, int n, int key) {

        int s = 0, e = n-1;
        int mid = s + (e-s)/2;
        int ans = -1;
        while(s<=e) {

            if(arr[mid] == key){
                ans = mid;
                s = mid + 1;
            }
            else if(key > arr[mid]) {//Right me jao
                s = mid + 1;
            }
            else if(key < arr[mid]) {//left me jao
                e = mid - 1;
            }

            mid = s + (e-s)/2;
        }
        return ans;
    }
    vector<int> firstAndLast(vector<int> &nums, int n, int target) {
        vector<int>ans;
        ans.push_back(firstOcc(nums, n, target));
        int last=lastOcc(nums, n, target);
        if(last!=-1)ans.push_back(last);
        
        return ans;
    }
};


    

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}

// } Driver Code Ends