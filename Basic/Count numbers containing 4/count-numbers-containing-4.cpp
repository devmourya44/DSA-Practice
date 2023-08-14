//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int check4(int num)
    {
      int x;
      while(num>0)
      {
         x=num%10;
         if(x==4)
         {
             return 1;
         }
         num=num/10;
      }
      return 0;
    }
    int countNumberswith4(int N) {
        // code here
        int ans=0;
        for(int i=1;i<=N;i++)
        {
            ans+=check4(i);
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countNumberswith4(N) << endl;
    }
    return 0;
}
// } Driver Code Ends