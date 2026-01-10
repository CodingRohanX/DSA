class Solution {
public:
    int solve(int m, int n,int i,int j, vector<vector<int>> &dp){
        if(i==m) return 0;
        if(j==n) return 0;
        if(i==m-1 && j==n-1) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        dp[i][j]=solve(m,n,i+1,j,dp)+solve(m,n,i,j+1,dp);
        return dp[i][j];
    }

    int solvetabu(int m, int n, vector<vector<int>> &dp){
        dp[0][0]=1;
        int l=0,u=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!(i==0 && j==0)){
                    l=0;u=0;
                    if(j!=0) l=dp[i][j-1];
                    if (i!=0) u=dp[i-1][j];
                    dp[i][j]=l+u;
                }
            }
        }	
        return dp[m-1][n-1];
    }

    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1));
	    //return solve(m,n,0,0,dp);
        return solvetabu(m,n,dp);
    }
};