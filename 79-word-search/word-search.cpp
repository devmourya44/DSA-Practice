class Solution {
public:
    int rows;
    int cols;
    int dx[4] = {1,-1,0,0};
    int dy[4] = {0,0,1,-1};

    bool backtrack(vector<vector<char>>&board , int i , int j , string word, int index)
    {
        if(index == word.size())
            return true;
        
        if(i >= rows or j >= cols or i < 0 or j < 0 or board[i][j] != word[index])
            return false;

        char t = board[i][j];
        board[i][j] = '*';
        
        bool x =
        backtrack(board,i+dx[0],j+dy[0],word,index+1) or
        backtrack(board,i+dx[1],j+dy[1],word,index+1) or
        backtrack(board,i+dx[2],j+dy[2],word,index+1) or
        backtrack(board,i+dx[3],j+dy[3],word,index+1);

        board[i][j] = t;

        return x;
    }

    bool exist(vector<vector<char>>& board, string word)
    {
        rows = board.size();
        cols = board[0].size();

        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(backtrack(board,i,j,word,0))
                    return true; 
            }
        }
        return false;
    }
 
};