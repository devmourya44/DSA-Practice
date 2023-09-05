class Solution {
public:
    void generateCombinations(int start, int k, int n, vector<int>& comb, vector<bool>& used, vector<vector<int>>& result) {
        if (k == 0 && n == 0) {
            result.push_back(comb);
            return;
        }
        if (k == 0 || n < 0) {
            return;
        }
        for (int i = start; i <= 9 - (k - 1); ++i) {
            if (!used[i]) {
                used[i] = true;
                comb.push_back(i);
                generateCombinations(i + 1, k - 1, n - i, comb, used, result);
                comb.pop_back();
                used[i] = false;
            }
        }
    }
    
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> comb;
        vector<bool> used(10, false); // 1 to 9
        generateCombinations(1, k, n, comb, used, result);
        return result;
    }
};