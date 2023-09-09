// //RECURSION
// class Solution {
// public:
//     int count(vector<int>&nums, int target){
//         if(target==0) return 1;
//         int n=nums.size();
//         int temp=0;
//         for(int i=0;i<n;i++){
//             if(target>=nums[i]) temp+= count(nums, target-nums[i]);
//         }
//         return temp;
//     }
//     int combinationSum4(vector<int>& nums, int target) {
//         return count(nums, target);
//     }
// };

//memoization

class Solution {
public:
    int count(vector<int>&nums, int target, vector<int>&dp){
        if(target==0) return 1;
        if(dp[target]!=-1) return dp[target];
        int n=nums.size();
        int temp=0;
        for(int i=0;i<n;i++){
            if(target>=nums[i]) temp+= count(nums, target-nums[i], dp);
        }
        return dp[target]= temp;
    }
    int combinationSum4(vector<int>& nums, int target) {
        vector<int>dp(target+1, -1);
        return count(nums, target, dp);
    }
};

// //tabulation

// class Solution {
// public:
//     int combinationSum4(vector<int>& nums, int target) {
//         vector<int>dp(target+1);
//         dp[0]=1;
//         int n=nums.size();
//         for(int i=1;i<=target;i++){
//             long long int temp=0;
//             for(int j=0;j<n;j++){
//                 if(nums[j]<=i) temp+=dp[i-nums[j]];
//             }
//             dp[i]=temp;
//         }
//         return dp[target];
//     }
// };