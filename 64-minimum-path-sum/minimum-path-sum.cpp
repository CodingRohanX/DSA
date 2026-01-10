class Solution {
public:
    int solve(int m, int n,int i,int j, vector<vector<int>> &dp,vector<vector<int>> &g){
        if(i==m) return INT_MAX;
        if(j==n) return INT_MAX;
        if(i==m-1 && j==n-1) return dp[i][j]=g[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        dp[i][j]=min(solve(m,n,i+1,j,dp,g),solve(m,n,i,j+1,dp,g));
        dp[i][j]+=g[i][j];
        return dp[i][j];
    }

    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return solve(m,n,0,0,dp,grid);
    }
};