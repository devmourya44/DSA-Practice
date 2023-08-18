//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


int transitionPoint(int arr[], int n) {
    int s=0,e=n-1;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        
        if(arr[mid]==1){
            ans=mid;
            e=mid-1;
            
        }
        else if(arr[mid]<1){
            s=mid+1;
        }
    }
    return ans;
}