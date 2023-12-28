//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution{
    public:
    bool match(string wild, string pattern)
    {
        int i=0,j=0;
        while(i<wild.size() and j<pattern.size()){
            if((isalpha(wild[i]) and isalpha(pattern[j])) and wild[i]!=pattern[j]){
                
                return false;
            }
            else if(wild[i]=='*'){
                if(i==wild.size()-1) return true;
                if(wild[i+1]==pattern[j] and wild[i+1]!=pattern[j+1]){
                    i++;
                    continue;
                }
                i++;
                j++;
                
                if(wild[i]=='?' and wild[i+1]==pattern[j+1]){
                    i++;
                    j++;
                    continue;
                }
                while(j<pattern.size() and wild[i]=='?' and wild[i+1]!=pattern[j+1] and isalpha(wild[i+1])){
                    j++;
                }
                while(wild[i]=='*'){
                    i++;
                    j++;
                }
                while(isalpha(wild[i]) and j<pattern.size() and wild[i]!=pattern[j]){
                    j++;
                }
                if(j==pattern.size()) {
                    return false;
                }
            }
            i++;
            j++;
            
        }
        while(i<wild.size()){
            if(isalpha(wild[i])) return false;
            i++;
        }
        if(j<pattern.size()){
            return false;
        }
        return true;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        string wild, pattern;
        cin>>wild>>pattern;
        
        Solution ob;
        bool x=ob.match(wild, pattern);
        if(x)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
    return 0;
}
// } Driver Code Ends