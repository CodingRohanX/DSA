class Solution {
public:
    int longestSubarray(vector<int>& n) {
        int l=0,r=0,c=0,ans=0;
        while(r<n.size()){
            if(c==1 && n[r]==0){
                ans=max(r-l,ans);
                while(l<r && n[l]!=0){
                    l++;
                }
                l++;
                //c=0;
            }
            else if(c==0 && n[r]==0) c=1;
            r++;
        }
        ans=max(r-l,ans);
        return ans-1;
    }
};

/*
1 1 1 0 1 1 0 1
0 1 2 3 4 5 6 7
*/