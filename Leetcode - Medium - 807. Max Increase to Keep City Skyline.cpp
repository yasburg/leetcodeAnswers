class Solution {
public:
    //got help from: https://leetcode.com/problems/max-increase-to-keep-city-skyline/discuss/120681/C%2B%2BJavaPython-Easy-and-Concise-Solution
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n = grid.size();//row number
        vector<int> rowsMaxs(n, 0), colsMaxs(n, 0);
    
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                rowsMaxs[i] = max(rowsMaxs[i], grid[i][j]);
                colsMaxs[j] = max(colsMaxs[j], grid[i][j]);
            }
        }
        int changeSum = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                changeSum += min(rowsMaxs[i], colsMaxs[j]) - grid[i][j];
            }
        }
        return changeSum;
    }
};