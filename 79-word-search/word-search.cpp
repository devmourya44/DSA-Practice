class Solution {
public:

    bool dfs(vector<vector<char>>& board, string& word, int index, int row, int col) {
        if (index == word.length()) {
            return true;
        }

        if (row < 0 || row >= board.size() || col < 0 || col >= board[0].size()) {
            return false;
        }

        if (board[row][col] != word[index]) {
            return false;
        }

        char temp = board[row][col];
        board[row][col] = '0'; // Mark as visited

        bool found = dfs(board, word, index + 1, row + 1, col) ||
                    dfs(board, word, index + 1, row - 1, col) ||
                    dfs(board, word, index + 1, row, col + 1) ||
                    dfs(board, word, index + 1, row, col - 1);

        board[row][col] = temp; // Mark as unvisited
        return found;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int rows = board.size();
        int cols = board[0].size();

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (dfs(board, word, 0, i, j)) {
                    return true;
                }
            }
        }

        return false;
    }
};