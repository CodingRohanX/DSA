class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int m=INT_MIN,c=0;
        for(int i=0;i<a.size();i++){
            c+=a[i];
            m=max(c,m);
            if(c<0) c=0;
        }
        return m;
    }
};