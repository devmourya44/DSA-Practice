//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int findMin(int nums[], int n){
        int left = 0,  right = n - 1;
        
        while(nums[left] > nums[right]) {
 
            int mid = (left + right)/2;
            if(nums[mid] > nums[right])
                left = mid + 1;
            else
                right = mid;
                
        }
        
        return nums[left];
    }
};

//{ Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}
// } Driver Code Ends