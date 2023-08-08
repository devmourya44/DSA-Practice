//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        int max_len=0;
        map<int,int> m;
        int pre_sum=0;
        m[0]=-1;
        for(int i=0;i<A.size();i++){
            pre_sum+=A[i];
            if(m.find(pre_sum)!=m.end()){
                max_len=max(max_len,i-m[pre_sum]);
            }
            else{
                m[pre_sum]=i;
            }
            
        }
        return max_len;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends