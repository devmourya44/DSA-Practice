//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to reverse every sub-array group of size k.
   void reverse(int l ,int r, vector<long long>& arr )
    {
        if(l>=r)
            return;
       swap(arr[l], arr[r]);
       reverse(l+1, r-1, arr);
    }
    void reverseInGroups(vector<long long>& arr, int n, int k){
        int i=0;
        for(i=0; i<n;)
        {
            if(i+k-1<n)
            {
                reverse(i, i+k-1, arr);
                i+=k;
            }
            else break;
        }
        reverse(i,n-1,arr);
    }
};

//{ Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends