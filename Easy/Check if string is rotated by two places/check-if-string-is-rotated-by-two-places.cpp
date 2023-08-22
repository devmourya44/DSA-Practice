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
        int n=str1.length();
        if(n==1){
            if(str1[0]==str2[0]) return true;
            else return false;
        }
        string s=""; // for storing anti clockwise rotated string
        string s1=""; // for storing clockwise rotated string
        for(int i=2;i<n;i++){
            s+=str1[i];
        }
        for(int i=0;i<2;i++){
            s+=str1[i];
        }
        
        for(int i=n-2;i<n;i++){
            s1+=str1[i];
        }
        for(int i=0;i<n-2;i++){
            s1+=str1[i];
        }
        if(s==str2 or s1==str2) return true;
        else return false;
        
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