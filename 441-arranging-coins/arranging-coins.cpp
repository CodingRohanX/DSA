class Solution {
public:
    int arrangeCoins(int n) {
        if(n==1) return 1;
        int i=1,c=0;
        while(n>=0){
            c++;
            n-=i;
            i++;
        }
        return c-1;
    }
};