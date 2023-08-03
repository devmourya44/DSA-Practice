//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define N 1000


// } Driver Code Ends
// you are required to complete this function 
// function should print the required range
class node{
    public:
    int data;
    int row;
    int col;
    node(int d,int r,int c){
        data=d;
        row=r;
        col=c;
    }
};

class compare{
    public:
    bool operator()(node* a,node* b){
        return a->data > b->data;
    }
};


class Solution{
    public:
    pair<int,int> findSmallestRange(int KSortedArray[][N], int n, int k)
    {
          //code here
          int mini=INT_MAX,maxi=INT_MIN;
          priority_queue<node*, vector<node*>,compare>minheap;
          
          //step 1: creating a minheap for starting element of 
          for(int i=0;i<k;i++){
              int element= KSortedArray[i][0];
              mini=min(mini,element);
              maxi=max(maxi,element);
              minheap.push(new node(element,i,0));
          }
          
        //   int L=mini,R=maxi;// [L,R]
          pair<int ,int>ans;
          ans.first=mini;
          ans.second=maxi;
          
          while(!minheap.empty()){
              node* temp=minheap.top();
              minheap.pop();
              
              mini= temp->data;
              
              //range or answer updation
              if(maxi-mini < ans.second-ans.first){
                  ans.first=mini;
                  ans.second=maxi;
              }
              
              
              //next element exists or not
              if(temp->col+1< n){
                  maxi= max(maxi, KSortedArray[temp->row][temp->col+1]);
                  minheap.push(new node(KSortedArray[temp->row][temp->col+1],temp->row,temp->col+1));
                  
              }else{
                  break;
              }
          }
          
          return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int arr[N][N];
        pair<int,int> rangee;
        for(int i=0; i<k; i++)
            for(int j=0; j<n; j++)
                cin>>arr[i][j];
        Solution obj;
	    rangee = obj.findSmallestRange(arr, n, k);
	    cout<<rangee.first<<" "<<rangee.second<<"\n";
    }   
	return 0;
}


// } Driver Code Ends