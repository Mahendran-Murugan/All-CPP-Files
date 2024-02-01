class Solution {
public:
     int pathFinder(int m, int n, vector<vector<int>> &dp){
        if(m == 1 && n == 1) return 1;
        if(m < 1 || n < 1) return 0;
        if(dp[m][n] != -1) return dp[m][n];
        return dp[m][n] = (pathFinder(m-1, n, dp) + pathFinder(m, n-1, dp));
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1,vector<int>(n+1, -1));
        return pathFinder(m, n, dp);
    }
};