class Solution {
public:
    int numWaterBottles(int b, int e) {
        int a=b,ebottle=b,fb;
        while(ebottle>e || fb!=0){
           fb=ebottle/e;
           ebottle=ebottle%e;
           a+=fb;
           ebottle+=fb;
        }
        return a;
    }
};