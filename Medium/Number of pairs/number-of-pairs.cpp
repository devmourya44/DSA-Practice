//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
 

class Solution{
    public:
    
    // X[], Y[]: input array
    // M, N: size of arrays X[] and Y[] respectively
    //Function to count number of pairs such that x^y is greater than y^x.
    long long countPairs(int X[], int Y[], int m, int n)
    {
        // code here
        // x^y > y^x
        // take log on both sides
        // ylog(x)>xlog(y)
        // y/x>log(y)/log(x)
        //y/log(y)> x/log(x)
      
        vector<double>x;
        vector<double>y;
        
        for(int i = 0; i<m; i++)
        {
            double temp1 = (double)X[i]/(double)log(X[i]);
            x.push_back(temp1);
        }
        
        for(int i = 0; i<n; i++)
        {
            double temp2 = (double)Y[i]/(double)log(Y[i]);
            y.push_back(temp2);
        }
        
        sort(x.begin(),x.end());
        sort(y.begin(), y.end());
        
        long long int ans = 0;
        for(auto z : y)
        {
            long long int temp3 = lower_bound(x.begin(),x.end(),z) - x.begin();
            ans = ans + temp3;
        }
        
        return ans;
    }
};


//{ Driver Code Starts.
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int M,N;
		cin>>M>>N;
		int i,a[M],b[N];
		for(i=0;i<M;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<N;i++)
		{
			cin>>b[i];
		}
		Solution ob;
		cout<<ob.countPairs(a, b, M, N)<<endl;
	}
}
// } Driver Code Ends