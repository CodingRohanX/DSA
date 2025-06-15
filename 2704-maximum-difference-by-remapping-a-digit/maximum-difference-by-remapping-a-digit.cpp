class Solution {
public:
    int minMaxDifference(int n) {
        string max = to_string(n);
        string min = max;
        char z;
        char c = min[0];
        for(auto &i: min){
            if(i==c) i='0';
        }
        int f=0;
        for(int i=0;i<max.size();i++){
            if(f==0 && max[i]!='9'){
                z=max[i];
                f=1;
                //break;
            }
            if(f==1 && z==max[i]){
                max[i]='9';
            }
        }
        int mx=stoi(max);
        int mn=stoi(min);
        return mx-mn;
    }
};