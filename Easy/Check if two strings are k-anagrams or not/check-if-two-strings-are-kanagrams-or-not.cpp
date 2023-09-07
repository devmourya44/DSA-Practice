//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    bool areKAnagrams(string str1, string str2, int k) {
        unordered_map<char, int> mp;
        if (str1.size() != str2.size()) return false;
        for (int i = 0; i < str1.size(); i++) {
            mp[str1[i]]++;
        }
        for (int i = 0; i < str2.size(); i++) {
            mp[str2[i]]--;
        }
        int ans = 0;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            ans += abs(it->second);  // Use abs() to handle negative counts
        }
        return ans <= 2*k;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		int k;
		cin>>k;
		Solution ob;
		if(ob.areKAnagrams(str1, str2, k) == true)
			cout<<"1\n";
		else
			cout<<"0\n";
	}
}
// } Driver Code Ends