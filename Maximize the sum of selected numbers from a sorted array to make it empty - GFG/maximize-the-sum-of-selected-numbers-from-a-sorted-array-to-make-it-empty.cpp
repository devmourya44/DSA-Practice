//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 
  

// } Driver Code Ends
class Solution{
    public:
    int maximizeSum(int a[], int n) 
    {
        // Complete the function
         int max=*max_element(a,a+n)+1;

        int arr[max]={0};

        for(int i=0;i<n;i++)

        {

            arr[a[i]]++;

        }

      

      for(int i=max-1;i>0;i--)

      {

          if(arr[i]!=0)

          {

              if(arr[i-1]<=arr[i])

              {

                  arr[i-1]=0;

              }

              else if(arr[i-1]>arr[i])

              {

                  arr[i-1]=arr[i-1]-arr[i];

              }

          }

      }

      int sum=0;

      for(int i=1;i<max;i++){

          if(arr[i]!=0){

              sum+=i*arr[i];

          }

      }

      return sum;

    }
    

};


//{ Driver Code Starts.



int main()
{
    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr, arr+n);
        Solution ob;
        
        cout << ob.maximizeSum(arr, n) << endl;
        
        
    }

}


// } Driver Code Ends