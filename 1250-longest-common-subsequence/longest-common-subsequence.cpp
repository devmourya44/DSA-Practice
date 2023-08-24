class Solution {
public:

    int SolveRec(string& s1,string& s2,int i,int j,vector<vector<int>>&dp){
        if(i==s1.length())return 0;
        if(j==s2.length())return 0;
        int ans=INT_MIN;
        if(dp[i][j]!=-1) return dp[i][j];
        
        if(s1[i]==s2[j]){
            ans=1+SolveRec(s1,s2,i+1,j+1,dp);
        }
        else{
            ans=max(SolveRec(s1,s2,i+1,j,dp),SolveRec(s1,s2,i,j+1,dp));
        }
        return dp[i][j]=ans;
    }



    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.length();
        int m=text2.length();

        vector<vector<int>>dp(n,vector<int>(m,-1));

        return SolveRec(text1,text2,0,0,dp);
    }
};