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

    int solvetabu(int m, int n, vector<vector<int>> &dp,vector<vector<int>> &g){
        dp[0][0]=g[0][0];
        int l=0,u=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!(i==0 && j==0)){
                    l=INT_MAX;u=INT_MAX;
                    if(j!=0) l=dp[i][j-1];
                    if (i!=0) u=dp[i-1][j];
                    dp[i][j]=min(l,u);
                    dp[i][j]+=g[i][j];
                }
            }
        }	
        return dp[m-1][n-1];
    }

    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        //return solve(m,n,0,0,dp,grid);
        return solvetabu(m,n,dp,grid);
    }
};