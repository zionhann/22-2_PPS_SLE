/**
 * @author zionhann
 * @date 2022-07-09
 * @title 867. Transpose Matrix
 * @from https://leetcode.com/problems/transpose-matrix/
 * @elapsed_time 16min
 */

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>> ans(col, vector<int>(row));
        
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                ans[j][i] = matrix[i][j];
            }
        }
        return ans;
    }
};