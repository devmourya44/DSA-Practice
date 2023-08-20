//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
      long long int count(int coins[], int N, int sum) {
        // Create a dp array of size sum + 1 to store the number of ways
        // to make each value from 0 to sum using the given coins
        vector<long long int> dp(sum + 1, 0);

        // There is one way to make sum = 0, i.e., by not using any coins
        dp[0] = 1;

        // Iterate through the coins array
        for (int i = 0; i < N; i++) {
            // Update the dp array for each value from coins[i] to sum
            // This represents the number of ways to make the current value
            // using the current coin and previously calculated ways
            for (int j = coins[i]; j <= sum; j++) {
                dp[j] += dp[j - coins[i]];
            }
        }

        // The final value at dp[sum] represents the number of ways to make
        // the given sum using the given coins
        return dp[sum];
    }

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends