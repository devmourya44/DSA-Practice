//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    void helper(int i,int sum,vector<int>&a,vector<int>&temp,vector<vector<int>>&ans)
    {
       if (sum == 0) {
            ans.push_back(temp);
            return;
        }
    
        if (i == a.size() || sum < 0)
            return;
    
        // Pick the element
        temp.push_back(a[i]);
        helper(i, sum - a[i], a, temp, ans);
        temp.pop_back();  // Backtracking
    
        // Skip duplicates
        while (i + 1 < a.size() && a[i] == a[i + 1])
            i++;
    
        // Non-picking the element
        helper(i + 1, sum, a, temp, ans);
      
    }
    vector<vector<int> > combinationSum(vector<int> &a, int sum) {
        // Your code here
        vector<vector<int>>ans;
        vector<int>temp;
        
        sort(a.begin(),a.end());
        helper(0,sum,a,temp,ans);
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends