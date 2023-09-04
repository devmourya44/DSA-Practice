class Solution {
public:

    void solve(int ind,int k,vector<int>&arr, vector<vector<int>>&ans,vector<int>&ds){
        if(ind==arr.size()){
            if(k==0){
                ans.push_back(ds);
            }
            return;
        }

        if(arr[ind]<=k){
            ds.push_back(arr[ind]);
            solve(ind,k-arr[ind],arr,ans,ds);
            ds.pop_back();
        }

        solve(ind+1,k,arr,ans,ds);

    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        solve(0,target,candidates,ans,ds);
        return ans;
    }
};