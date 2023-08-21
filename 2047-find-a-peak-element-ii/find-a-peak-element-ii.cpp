class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                bool isPeak = true;
                if (i > 0 && matrix[i][j] < matrix[i - 1][j])
                    isPeak = false;
                if (i < m - 1 && matrix[i][j] < matrix[i + 1][j])
                    isPeak = false;
                if (j > 0 && matrix[i][j] < matrix[i][j - 1])
                    isPeak = false;
                if (j < n - 1 && matrix[i][j] < matrix[i][j + 1])
                    isPeak = false;

                if (isPeak)
                    return {i, j};
            }
        }

        return {-1, -1}; 
    }
};