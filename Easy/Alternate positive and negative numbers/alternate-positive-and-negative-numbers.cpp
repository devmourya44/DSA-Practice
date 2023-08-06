//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    vector<int>temp1,temp2;
        for(int i=0;i<n;i++){
            if(arr[i] >=0)temp1.push_back(arr[i]);
            else temp2.push_back(arr[i]);
        }
        int j=0,k=0,i=0;
        while(i<n){
            if(j<temp1.size()){arr[i]=temp1[j];
            j++;
            i++;
          }
            if(k<temp2.size()){
                arr[i]=temp2[k];
                k++;
                i++;
            }
        }
     
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends