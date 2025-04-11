class Solution {
public:
    int count(int n){
        int n1=n,c=0,s1=0,s2=0;
        while(n1>0){
            n1/=10;
            c++;
        }
        if(c%2==1) return 0;
        c=c/2;
        while(c>0){
            s2+=n%10;
            n/=10;
            c--;
        }
        while(n>0){
            s1+=n%10;
            n/=10;
        }
        if(s1==s2) return 1;
        return 0;
    }

    int countSymmetricIntegers(int low, int high) {
        int c=0;
        for(int i=low;i<=high;i++) if(count(i)) c++;
        return c;
    }
};