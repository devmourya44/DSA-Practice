class Solution {
public:
    int change(int amount, vector<int> &coins)
    {
       	//Here if we see carefully then in 2D table we require only 2
       	//rows i and i+1, i+1 is the prev row
       	//So 2D dp can be converted into 1D dp where only dependant 
       	//param is amount

       	//dp[j] is similar to dp[i][j]
       	//Outer loop from n-1 to 0 and inner loop from coins[i] to amount
       	//Inner loop is taken so because in normal tabulation we were
       	//examining the case if coinAmt is greater than amount
       	//In such cases above relation was dp[i][j]=dp[i+1][j]
       	//So mathematically saying 
       	//dp[i][j]=dp[i+1][j]=dp[j](Deduced\U0001f4a5)
       	//Non pick case will also be similar 
       	//Previously it was 
       	//dp[i][j]=dp[i+1][j]+dp[i][j-amt]
       	//Now it will be dp[j]=dp[j] + dp[j-amt]
       	//See the analogy we are using 

       	//Jyada logic se space optimized nahin hua hain bas
       	//mathematically pattern mila usse dekh rahe
        int n = coins.size();
        vector<int> dp(amount + 1);
        dp[0] = 1;
       	//0 amount ke liye 1 way

        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = coins[i]; j <= amount; j++)
            {
                dp[j] += dp[j - coins[i]];
               	//dp[i][j]=dp[i+1][j]+dp[i][j-amt]
            }
        }

        return dp[amount];
       	//dp[0][amount]
    }
};