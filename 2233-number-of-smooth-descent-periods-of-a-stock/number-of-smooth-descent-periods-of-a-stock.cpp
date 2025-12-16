class Solution {
public:
    long long sum1(long long n){
        return (n*(n+1)/2);
    }

    long long getDescentPeriods(vector<int>& p) {
        //return 0;
        int s=p.size();
        if(s<2) return 1;
        long long a=s,t;
        int p1=0,p2=0;
        while(p2<s-1){
            if(p[p2]-1==p[p2+1]){
                while(p[p2]-1==p[p2+1]){
                    p2++;
                    if(p2==s-1) break;
                }
                t=p2-p1;
                a+=sum1(t);
            }
            p2++;
            p1=p2;
        }
        return a;
    }
};
/*
4 - 1
3 - 2
2 - 3

5 - 1
4 - 2
3 - 3
2 - 4
*/