class Solution
{
public:
    bool wordSercher(vector<vector<char>> &board, int cr, int cc, int index, int row, int col, string word)
    {
        if (index == word.length())
            return true;
        if (cr < 0 or cc < 0 or cr >= row or cc >= col or board[cr][cc] != word[index])
        {
            return false;
        }

        char t = board[cr][cc];
        board[cr][cc] = '*';
        bool res = wordSercher(board, cr + 1, cc, index + 1, row, col, word) or
                   wordSercher(board, cr - 1, cc, index + 1, row, col, word) or
                   wordSercher(board, cr, cc + 1, index + 1, row, col, word) or
                   wordSercher(board, cr, cc - 1, index + 1, row, col, word);

        board[cr][cc] = t;
        return res;
    }

    bool exist(vector<vector<char>> &board, string word)
    {
        int row = board.size();
        int col = board[0].size();
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (board[i][j] == word[0] && wordSercher(board, i, j, 0, row, col, word))
                {
                    return true;
                }
            }
        }
        return false;
    }
};