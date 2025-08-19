class Solution {
public:
    long long zeroFilledSubarray(vector<int>& n) {
        long long ans=0;
        long long p1=0,p2,n1;
        while(p1<n.size()){
            if(n[p1]==0){
                p2=p1+1;
                while(p2<n.size() && n[p2]==0) p2++;
                n1=p2-p1;
                ans+=(n1*(n1+1))/2;
                p1=p2-1;
            }
            p1++;
        }
        return ans;
    }
};

/*
1 - 1
2 - 3
3 - 6
4 - 10
5 - 15
0 0 0 0 0
*/