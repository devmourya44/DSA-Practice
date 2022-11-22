//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        int i=0, j=0;

        long long sum=arr[0];

        vector<int>v;

        if(sum!=s){

            

        for(i=1;i<n;i++){

           

            sum+=arr[i];

            

            while(sum>=s){

                

                if(sum==s){

                    break;

                }

                sum-=arr[j];

                 j++;

            }

             if(sum==s){

                break;

                }

            

         }

        }////

       

        if( sum!=s ||(sum==s && j>i )){

        v.push_back(-1);

        }

        else{

            

                v.push_back(++j);

                v.push_back(++i);

            }

        

        return v;

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
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends