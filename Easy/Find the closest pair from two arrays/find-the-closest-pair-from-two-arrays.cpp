//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function teamplate for C++

class Solution{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) 
    {
        int i=0;
        int j=m-1;
        int minDiff = INT_MAX; // Initialize the minimum difference to a large value
        vector<int> ans(2); // Initialize a vector to store the result

        // Iterate through both arrays until we reach the end of either one
        while (i < n && j >= 0) {
            int sum = arr[i] + brr[j]; // Calculate the sum of elements at the current positions
            int diff = abs(sum - x);   // Calculate the absolute difference from the target x
    
            // If the current difference is smaller than the minimum difference found so far
            if (diff < minDiff) {
                minDiff = diff;     // Update the minimum difference
                ans[0] = arr[i];    // Update the first element of the result pair
                ans[1] = brr[j];    // Update the second element of the result pair
            }
    
            // Move pointers based on the sum relative to x
            if (sum < x)
                i++; // Move pointer in the first array to increase the sum
            else
                j--; // Move pointer in the second array to decrease the sum
        }

        return ans;

    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	int m,n,x;
	while(t--)
    {
        cin>>n>>m;
        int a[n],b[m];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        for(int i=0;i<m;i++)
            cin>>b[i];
            
        cin>>x;
        
        vector<int> ans;
        Solution ob;
        ans = ob.printClosest(a, b, n, m, x);
        cout << abs(ans[0] + ans[1] - x) << endl;
        
    }
    return 0;
}

// } Driver Code Ends