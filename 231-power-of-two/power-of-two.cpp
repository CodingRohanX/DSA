class Solution {
public:

    bool check(int n){
        if(n%2==1){
            return 0;
        }
        if(n==2 || n==-2){
            return 1;
        }
        return check(n/2);
    }

    bool isPowerOfTwo(int n) {
        if(n==1){
            return 1;
        }
        if(n==0){
            return 0;
        }
        if(n<0){
            return 0;
        }
        return check(n);
    }
};