//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    
     void solve(string s , int index , vector<string>& ans){
        //base case
        if(index >= s.size()){
            ans.push_back(s);
            return;
        }
        
        for(int j = index ; j < s.size() ; j++){
            swap(s[index] , s[j]);
            solve(s , index+1 , ans);
            swap(s[index] , s[j]);
        }
    }
    
    vector<string> permutation(string S)
    {
        //Your code here
        vector<string> ans;
        int index = 0;
        solve(S , index , ans);
        sort(ans.begin() , ans.end());
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
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends