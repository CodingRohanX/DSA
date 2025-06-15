class Solution {
public:
    int longestMountain(vector<int> a) {
        int temp=0,m=0,ptr=0,f=0;
        while(ptr<a.size()-1){
            while(ptr<a.size()-1 && a[ptr]<a[ptr+1]){
                temp++;
                ptr++;
                while(ptr<a.size()-1 && a[ptr]>a[ptr+1]){
                    temp++;
                    ptr++;
                    f=1;
                }
                if(f==1)break;
            }
            if(f==1){
                temp++;
                m=max(temp,m);
                temp=0;
                f=0;
            }
            else ptr++;
            if(ptr<a.size()-1 && a[ptr]==a[ptr-1]) temp=0;
        }
        return m;
    }
};