//{ Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        int sum=0;
        map<int, int> m;
        for(int i=0;i< n;i++)
        {
            sum = sum+arr[i];
            //putting each sum value in map
            m[sum] ++;
            
            //if at any time sum=0 return true
            if(sum==0)
            return true;
        }
        for(auto x: m)
        {
            //if at any sum comes two time means there is zero present
            if(x.second>1)
            return true;
           
        }
        return false ;
    }
};

//{ Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}
// } Driver Code Ends