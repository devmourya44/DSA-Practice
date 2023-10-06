//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
        //Complete this function
        //Function to sort the array according to frequency of elements.
        
        
        //     //USING PRIORITY QUEUE    GIVNG TLE
        // vector<int> sortByFreq(int arr[],int n)
        // {
            
        //     vector<int>ans;
        //     unordered_map<int,int>mp;
        //     for(int i=0;i<n;i++){
        //         mp[arr[i]]++;
        //     }
        //     priority_queue<pair<int,int>>pq;
        //     for(auto x:mp){
        //         pq.push({x.second,-x.first});
        //     }
        //     while(!pq.empty()){
        //         pair<int,int>p=pq.top();
        //         int freq=p.first;
        //         while(freq--){
        //             ans.push_back(-p.second);
        //         }
        //         pq.pop(); 
                
        //     }
        //     return ans;
        // }
        
        
        //USING VECTOR OF PAIR TYPE AND A COMPARATOR FUNCTION
        bool static comp(pair<int, int> a, pair<int, int> b) {
            if (a.first > b.first) {
                return true;
            } else if (a.first == b.first) {
                return a.second < b.second; // Compare a.second and b.second
            } else {
                return false;
            }
        }
        vector<int> sortByFreq(int arr[],int n)
        {
          map<int , int>mp;
          for(int i=0 ; i<n ; i++)
          {
              mp[arr[i]]++;
          }
          vector<pair<int,int>>ans;
          vector<int>ans1;
          for(auto value : mp)
          {
              ans.push_back({value.second , value.first});
          }
          sort(ans.begin() , ans.end() , comp);
          for(int i=0 ; i<ans.size() ; i++)
          {
              while(ans[i].first--)
              {
                  ans1.push_back(ans[i].second);
              }
          }
          return ans1;
        }
        
};

//{ Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}


// } Driver Code Ends