class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> ans;
        int n = matrix.size();
        for (int i = 0; i < matrix[0].size(); i++)
        {
            vector<int> tmp;
            for (int j = 0; j < n; j++) tmp.push_back(matrix[j][i]);
            ans.push_back(tmp);
        }
        return ans;
    }
};