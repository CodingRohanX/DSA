class Solution {
public:
    bool isHappy(int n) {
        if(n==1) return 1;
        if(n<7) return 0;
        int sum=0;
        while(n>0){
            sum+=pow(n%10,2);
            n/=10;
        }
        return isHappy(sum);
    }
};