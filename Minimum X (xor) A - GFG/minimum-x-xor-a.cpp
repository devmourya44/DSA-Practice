//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minVal(int a, int b) {
        // code here
         vector<int>v;

        int count=0;

        for(int i=0;i<32;i++){

            

            if((a&(1<<i))!=0){

                v.push_back(1);

            }else{

                v.push_back(0);

                

                

            }

            if((b&(1<<i))!=0) count++;

            

        }

        vector<int>ans;

        for(int i=32;(i>=0)&&(count!=0);i--){

            if(v[i]==1){

                ans.push_back(i);

                count--;

            }

        }

        for(int i=0;(i<32)&&(count!=0);i++){

            if(v[i]==0){

                ans.push_back(i);

                count--;

            }

        }

        int s=0;

        for(int i=0;i<ans.size();i++){

            s=(s^(1<<ans[i]));

        }

        return s;

        // code here

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends