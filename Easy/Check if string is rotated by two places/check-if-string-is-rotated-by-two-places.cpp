//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        bool b1 = true,b2 = true;
        int n = str1.size();
        for(int i = 0, j = 2;i < n;i++,j++){
            j %= n;
            if(str1[i] != str2[j]){
                b1 = false;
                break;
            }
        }
        for(int i = 0,j = n-2;i < n;i++,j++){
            j %= n;
            if(str1[i] != str2[j]){
                b2 = false;
                break;
            }
        }
        return b1 or b2;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends