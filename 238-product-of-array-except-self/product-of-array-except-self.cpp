class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        int n=a.size();
        vector<int> v1(n),v2(n),ans(n);
        v1[0]=1;
        v2[n-1]=1;
        for(int i=1;i<n;i++){
            v1[i]=v1[i-1]*a[i-1];
        }
        for(int i=n-2;i>=0;i--){
            v2[i]=v2[i+1]*a[i+1];
        }
        for(int i=0;i<n;i++){
            ans[i]=v1[i]*v2[i];
        }
        return ans;
    }
};