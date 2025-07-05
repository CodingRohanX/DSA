class Solution {
public:
    int findLucky(vector<int>& a) {
        sort(a.begin(),a.end());
        int c=1,ans=-1;
        for(int i=a.size()-1;i>0;i--){
            if(a[i]==a[i-1]) c++;
            else{
                if(c==a[i]) ans=max(c,ans);
                c=1;
            }
        }
        if(c==a[0]) ans=max(c,ans);
        return ans;
    }
};