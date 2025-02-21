class Solution {
    public:
        int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
            int m = obstacleGrid.size(), n = obstacleGrid[0].size();
            
            // If start or end cell has an obstacle, no path exists
            if (obstacleGrid[0][0] == 1 || obstacleGrid[m-1][n-1] == 1) 
                return 0;
    
            vector<vector<int>> dp(m, vector<int>(n, 0));
            dp[0][0] = 1; // Start position
    
            // Fill the DP table
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    if (obstacleGrid[i][j] == 1) {
                        dp[i][j] = 0; // No paths if there's an obstacle
                    } else {
                        if (i > 0) dp[i][j] += dp[i - 1][j]; // Paths from top
                        if (j > 0) dp[i][j] += dp[i][j - 1]; // Paths from left
                    }
                }
            }
            return dp[m-1][n-1];
        }
    };
    