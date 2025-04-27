class Solution {
public:
    int countSubarrays(vector<int>& n) {
        int c=0;
        for(int i=0;i<n.size()-2;i++){
            if(2*(n[i]+n[i+2])==n[i+1]) c++;
        }
        return c;
    }
};