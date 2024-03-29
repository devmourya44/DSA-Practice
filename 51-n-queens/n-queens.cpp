class Solution {
public:
    void solve(int col, vector<string>& board, vector<vector<string>>& ans, vector<int>& lr, vector<int>& ud, vector<int>& ld, int n) {
        if (col == n) {
            ans.push_back(board);
            return;
        }
        for (int row = 0; row < n; row++) {
            if (lr[row] == 0 && ld[row + col] == 0 && ud[n - 1 + col - row] == 0) {
                board[row][col] = 'Q';
                lr[row] = 1;
                ld[row + col] = 1;
                ud[n - 1 + col - row] = 1;
                
                solve(col + 1, board, ans, lr, ud, ld, n);
                
                board[row][col] = '.';
                lr[row] = 0;
                ld[row + col] = 0;
                ud[n - 1 + col - row] = 0;
            }
        }
    }

public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');
        for (int i = 0; i < n; i++) {
            board[i] = s;
        }
        vector<int> leftrow(n, 0), upperDiagonal(2 * n - 1, 0), lowerDiagonal(2 * n - 1, 0);
        
        solve(0, board, ans, leftrow, upperDiagonal, lowerDiagonal, n);
        
        return ans;
    }
};