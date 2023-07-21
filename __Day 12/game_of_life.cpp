class Solution {
public:
    int count_all(vector<vector<int>> &mat,int i,int j)
    {
        int cnt = 0;
        if(i > 0)
        {
            cnt += mat[i-1][j];
        }
        if(i > 0 and j > 0)
        {
            cnt += mat[i-1][j-1];
        }
        if(i > 0 and j < mat[0].size())
        {
            cnt += mat[i-1][j+1];
        }
        if(j > 0)
        {
            cnt += mat[i][j-1];
        }
        if(i < mat.size() and j > 0)
        {
            cnt += mat[i+1][j-1];
        }
        if(i < mat.size() and j < mat[0].size())
        {
            cnt += mat[i+1][j+1];
        }
        if(i < mat.size())
        {
            cnt += mat[i+1][j];
        }
        if(j < mat[0].size())
        {
            cnt += mat[i][j+1];
        }
        
        return cnt ;
        
    }
    void gameOfLife(vector<vector<int>>& board) {

        int n = board.size(), m = board[0].size();

        vector<vector<int>> mat(n+1, vector<int> (m+1,0));
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                mat[i][j] = board[i][j];
            }
        }
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                int a = count_all(mat,i,j);
                if(board[i][j] == 1)
                {
                    if(a  <  2)
                    board[i][j] = 0;
                    else if(a  > 3)
                    board[i][j] = 0;
                }
                else
                {
                    if(a  ==  3)
                    board[i][j] = 1;
                }
                
            }
        }
    }
};