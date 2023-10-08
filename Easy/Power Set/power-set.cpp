//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		void solve(string s, vector<string>& ans, string output, int i){
        
            if(i >= s.length()){
                ans.push_back(output);
                return;
            }
            
            // Exclude
            solve(s,ans,output,i+1);
            // Include
            output.push_back(s[i]);
            solve(s,ans,output,i+1);
            
        }
        
        vector<string> AllPossibleStrings(string s){
            vector<string> ans;
            
            string output = "";
            int i = 0;
            solve(s,ans,output,i);
            
            sort(ans.begin(),ans.end());
            
            vector<string>::iterator it1;
            it1=ans.begin();
            ans.erase(it1);
            
            return ans;
        }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends