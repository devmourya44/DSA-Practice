//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
// } Driver Code Ends

bool findPair(int arr[], int n, int key){
   sort(arr,arr+n);
   int i=0;
   int j=1;
   while (i<n && j<n){
       if(i!=j && arr[j]-arr[i]==key){
           return true;
       }
       else if(arr[j]-arr[i]<key){
           j+=1;
       }
       else{
           i+=1;
       }
   }
   return false;

}