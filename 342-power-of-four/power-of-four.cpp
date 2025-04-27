class Solution {
public:
    bool isPowerOfFour(float n, bool f=0) {
        if(n==1 && f==0) return 1;
        if(n<4) return 0;
        if(n==4) return 1;
        return isPowerOfFour(n/4,1);
        //return 0;
    }
};

// 4 16 64 256 1024