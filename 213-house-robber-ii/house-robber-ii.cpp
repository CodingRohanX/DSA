class Solution {
public:
    int solve(int i, vector<int> &v, vector<int> &dp) {
        if (i >= v.size())
            return 0;

        if (dp[i] != -1)
            return dp[i];

        int take = v[i] + solve(i + 2, v, dp);
        int skip = solve(i + 1, v, dp);

        return dp[i] = max(take, skip);
    }

    int rob(vector<int>& v) {
        int n = v.size();
        if(n==1) return v[0];
        vector<int> a1;
        vector<int> a2;
        for(int i=0;i<n;i++){
            if(i!=0) a1.push_back(v[i]);
            if(i!=n-1) a2.push_back(v[i]);
        }
        vector<int> dp1(a1.size(), -1);
        vector<int> dp2(a2.size(), -1);
        return max(solve(0, a1, dp1),solve(0,a2,dp2));
    }
};