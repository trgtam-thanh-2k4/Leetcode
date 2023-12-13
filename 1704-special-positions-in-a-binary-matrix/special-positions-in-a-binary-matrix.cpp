class Solution {
public:
    int countRow(vector<vector<int>>& mat, int row)
    {
        int count = 0;
        for (int i = 0; i < mat[0].size(); i++)
        {
            if (mat[row][i] == 1) count++;
        }
        return count;
    } 
    int countCol(vector<vector<int>>& mat, int col)
    {
        int count = 0;
        for (int i = 0; i < mat.size(); i++)
        {
            if (mat[i][col] == 1) count++;
        }
        return count;
    } 
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int count = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mat[i][j] == 1)
                {
                    if (countRow(mat, i) == 1 && countCol(mat, j) == 1) count++;
                }
            }
        }
        return count;
    }
};