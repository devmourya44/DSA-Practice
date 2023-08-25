class Solution {
    int maxLen = 1;
    int start = 0;
    int end = 0;
public:
    string longestPalindrome(string s) {
        int n = s.length();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        longestPalindrome(s, 0, s.length()-1, dp);
        return s.substr(start, end-start+1);
    }

    bool longestPalindrome(string& s, int i, int j, vector<vector<int>>& dp) {
        if(i > j) return true;

        if(dp[i][j] != -1) 
            return (dp[i][j] == 1);

        if(i == j) {
            dp[i][j] = 1;
            return true;
        }

        dp[i][j] = 0;
        if(s[i] == s[j] && longestPalindrome(s, i+1, j-1, dp)) {
            int len = j-i+1;
            if(len > maxLen) {
                maxLen = len;
                start = i;
                end = j;
            }
            dp[i][j] = 1;
        } else if(!longestPalindrome(s, i+1, j, dp)) {
            longestPalindrome(s, i, j-1, dp);
        }

        return dp[i][j] == 1;
    }
};