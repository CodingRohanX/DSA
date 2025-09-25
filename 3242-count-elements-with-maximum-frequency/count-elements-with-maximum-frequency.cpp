class Solution {
public:
    int maxFrequencyElements(vector<int>& n) {
        map<int,int> m;
        int mx=0,c=0;
        for(auto i: n){
            m[i]++;
        }
        for(auto it=m.begin();it!=m.end();++it){
            if(it->second>c) {
                c=it->second;
                mx=c;
            }
            else if(it->second==c) mx=mx+c;
        }
        return mx;
    }
};