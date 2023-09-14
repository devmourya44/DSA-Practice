//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
     bool isSubsetSum(vector<int>arr, int sum){
        
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            int ans=0;
            for(int j=i;j<arr.size();j++){
                ans+=arr[j];
                if(ans==sum){
                    return 1;
                }
                else if(ans>sum){
                    break;
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends