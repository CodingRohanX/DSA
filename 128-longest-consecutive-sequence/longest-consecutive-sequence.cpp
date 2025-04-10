class Solution {
public:
    int longestConsecutive(vector<int>& n) {
        map<int,int> m;
        if(n.size()==0) return 0;
        int t=0,a=1,f=0;
        for(auto i: n) m[i]++;
        int p=m.begin()->first;
        for(auto it=m.begin();it!=m.end();++it){
            if(f==0 && p+1==it->first) {
                f=1;
                t=2;
            }
            else if(f==1 && p+1!=it->first){
                f=0;
                a=max(t,a);
                t=0;
            }
            else if(f==1 && p+1==it->first){
                t++;
            }
            p=it->first;
        }
        a=max(t,a);
        return a;
    }
};