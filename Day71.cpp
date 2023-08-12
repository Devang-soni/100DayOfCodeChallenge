//63. Unique Paths II

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if (obstacleGrid[0][0] == 1) {
            return 0;
        }
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 || j == 0) {
                    if (obstacleGrid[i][j] == 1 || ( i > 0 && obstacleGrid[i-1][j] == 0) || (j > 0 && obstacleGrid[i][j-1] == 0)) {
                        obstacleGrid[i][j] = 0;
                    }
                    else {
                        obstacleGrid[i][j] = 1;
                    }
                }
                else {
                    if (obstacleGrid[i][j] == 1) {
                        obstacleGrid[i][j] = 0;
                    }
                    else {
                        obstacleGrid[i][j] = obstacleGrid[i][j-1] + obstacleGrid[i-1][j];
                    }
                }
            }
        }
        return obstacleGrid[m-1][n-1];
    }
};
