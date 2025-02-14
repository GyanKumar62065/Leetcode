class Solution {
public:
    int helper(int m, int n, vector<vector<int>>&grid, vector<vector<int>>&dp ){
        if(grid[m][n]) return 0;
        if(m == 0 && n == 0) return 1;

        if(dp[m][n] != -1) return dp[m][n];

        int ans = 0;
        if(m > 0){
            ans += helper(m-1 , n , grid, dp);
        }
        if(n > 0){
            ans += helper(m , n-1, grid, dp);
        }

        return dp[m][n]=ans;
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {


        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>>dp(m+1, vector<int>(n+1, -1));

        // Recursive...
        return helper(m-1 , n-1 , obstacleGrid, dp);

        // // Tabulation Approch
        // int ans = 0;


        // for(int i = 0; i < m; i++){
        //     for(int j =0; j < n; j++){

        //     }
        // }

    }
};