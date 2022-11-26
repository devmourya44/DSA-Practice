//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    int c_to_i(char c)

    {

        return c-'0';

    }
public:
    string decodedString(string s){
        // code here
         stack<pair<string,int>> st ;

        int i =0 ;

        string a;

        while(i<s.length())

        {

            

            if(s[i]=='[')

            {

                int j =i-1;

                int count=0;

                string l;

                while(j>=0 && c_to_i(s[j])<10 && c_to_i(s[j])>=0)

                {

                    l= s[j]+l;

                    count++;

                    j--;

                }

                int sender =stoi(l);

                a= a.substr(0,a.length()-count);

                st.push({a,sender});

                a="";

                

            }

            else if(s[i]==']')

            {

                int j =st.top().second;

                

                string k = a;

                for( int n =1;n<j ;n++)

                {

                    a=a+k;

                }

                a= st.top().first+a;

                st.pop();

            }

            else

            {

                a= a+s[i];

            }

            i++;

        }

        return a;

    
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends