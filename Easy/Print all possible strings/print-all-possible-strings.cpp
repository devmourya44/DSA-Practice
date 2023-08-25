//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

vector<string>  spaceString(char str[]);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        char str[10000];
        cin>>str;
        vector<string> vec = spaceString(str);
        for(string s: vec){
            cout<<s<<"$";
        }
        cout<<endl;
    }

}

// } Driver Code Ends


/*You have to complete this function*/

void solve(string s,vector<string>&res,int idx,string temp){
      if(idx==s.size()){
         res.push_back(temp); 
         return;
      }
     
          solve(s,res,idx+1,temp+s[idx]);
          solve(s,res,idx+1,temp+" "+s[idx]);
      
}  

vector<string>  spaceString(char str[])
{   string s=str;
    string temp="";
    temp+=s[0];
   vector<string>res;
   solve(s,res,1,temp); 
   return res;
}