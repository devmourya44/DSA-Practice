//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
      public:
        bool ispossible(int a[], int n, int k, long long mid){
            long long paintersCount=1;
            long long wallsum =0;
            
            for(int i=0; i<n; i++){
                if(wallsum + a[i]<=mid){
                    wallsum = wallsum+a[i];
                }
                
                else{
                    paintersCount++;
                    wallsum=a[i];
                }
                    
                    if(paintersCount>k || a[i] > mid){
                        return false;
                    }
                }
             return true;
        }
        long long minTime(int a[], int n, int k)
        {
            // code here
            // return minimum time
            long long s =0;
            long long sum=0;
            for(int i=0; i<n; i++){
                sum = sum+ a[i];
            }
            long long e =sum;
            long long ans=-1;
            
            while(s<=e){
                int mid= s+ (e-s)/2;
                
                if(ispossible(a, n, k, mid)==true){
                    ans = mid;
                    e = mid-1;
            }
            else{
                s = mid +1;
            }
        }
        return ans;
    }

};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends