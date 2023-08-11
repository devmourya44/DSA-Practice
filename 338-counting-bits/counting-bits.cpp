class Solution {
public:
    int countSetBits(int n)
    {
        // base case
        if (n == 0)
            return 0;
        else
            return 1 + countSetBits(n & (n - 1));
    }
    vector<int> countBits(int n) {
        vector<int>dp(n+1,-1);
        dp[0]=0;
        for(int i=1;i<=n;i++){
            dp[i]=countSetBits(i);
        }
        return dp;
    }
};