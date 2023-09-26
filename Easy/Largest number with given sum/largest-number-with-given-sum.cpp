//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return Largest Number

class Solution
{
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    string largestNumber(int n, int sum)
    {
        string ans ="";
        
        while(n--){
            //if sum is greater than 9 keep reducing the sum and add 9 to the string
            //until 9 > sum
            if(sum > 9){
                sum = sum-9;
                ans += '9';
            }
            // when sum value is b/w 0 to 8 convert it into string ans keep adding to the
            // string and reduce the sum simultenously
            else{
                ans += sum +'0';
                sum -=sum;
            }
        }
        
        //if you see that after exhausting the value of n, sum value is not equal to 0
        // return "-1" 
        if(sum != 0){
            return "-1";
        }else{
            return ans;
        }
    }
};

//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin>>t;

	while(t--)
	{
	    //taking n and sum
		int n,sum;
		cin>>n>>sum;
		
        Solution obj;
        //function call
		cout<<obj.largestNumber(n, sum)<<endl;
	}
	return 0;
}
// } Driver Code Ends