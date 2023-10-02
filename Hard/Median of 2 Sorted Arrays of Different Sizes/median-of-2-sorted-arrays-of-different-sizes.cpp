//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        int index1=0;
        int index2=0;
        vector<int> ans;
        while((index1<array1.size()) && (index2<array2.size())){
            if(array1[index1]<array2[index2]){
                ans.push_back(array1[index1++]);
            }
            else{
                ans.push_back(array2[index2++]);
            }
        }
        while(index1<array1.size()){
            ans.push_back(array1[index1++]);
        }
        while(index2<array2.size()){
            ans.push_back(array2[index2++]);
        }
        if(ans.size()&1){
            int avg=ans.size()/2;
            return (ans[avg]);
        }
        else{
            int  num1=ans.size()/2;
            int  num2=(ans.size()-1)/2;
            
            float avg =(ans[num1]+ans[num2]);
            float m=avg/2;
            return m;
        }
    
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends