class Solution {
public:
vector<vector<int>>dp;
    int solve(vector<int>& nums, int k,int ind){
        if(ind==nums.size()&& k==0) return 0;
        if(k==0) return 1e9;
        if(dp[ind][k]!=-1) return dp[ind][k];
        int sum=0;
        int ans=INT_MAX,mn=INT_MIN;
        for(int i=ind;i<nums.size();i++){
           sum+=nums[i];
           mn=max({sum,solve(nums,k-1,i+1)});
           ans=min(ans,mn);
        }
        return dp[ind][k]=ans;
    }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        dp.resize(n+1,vector<int>(k+1,-1));
        return solve(nums,k,0);
    }
};