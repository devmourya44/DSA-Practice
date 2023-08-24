class Solution {
public:
    //by memoization

    // int SolveRec(string& s1,string& s2,int i,int j,vector<vector<int>>&dp){
    //     if(i==s1.length())return 0;
    //     if(j==s2.length())return 0;
    //     int ans=INT_MIN;
    //     if(dp[i][j]!=-1) return dp[i][j];
        
    //     if(s1[i]==s2[j]){
    //         ans=1+SolveRec(s1,s2,i+1,j+1,dp);
    //     }
    //     else{
    //         ans=max(SolveRec(s1,s2,i+1,j,dp),SolveRec(s1,s2,i,j+1,dp));
    //     }
    //     return dp[i][j]=ans;
    // }
    // int longestCommonSubsequence(string text1, string text2) {
    //     int n=text1.length();
    //     int m=text2.length();

    //     vector<vector<int>>dp(n,vector<int>(m,-1));

    //     return SolveRec(text1,text2,0,0,dp);
    // }


    //by tabulation
    int SolveTab(string& s1,string& s2){
        int n=s1.length();
        int m=s2.length();

        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                int ans=0;
                if(s1[i]==s2[j]){
                    ans=1+dp[i+1][j+1];
                }
                else{
                    ans=max(dp[i+1][j],dp[i][j+1]);
                }
                dp[i][j]=ans;
            }
        }

        
        return dp[0][0];
    }


    int longestCommonSubsequence(string text1, string text2) {
        return SolveTab(text1,text2);
    }
};