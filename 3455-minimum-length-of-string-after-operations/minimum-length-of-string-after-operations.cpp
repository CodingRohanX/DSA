class Solution {
public:
    int minimumLength(string s) {
        map<char,int> m;
        int c=0;
        for(auto i: s){
            m[i]++;
        }
        for(auto it=m.begin();it!=m.end();++it){
            if(it->second>2 && it->second%2==0) it->second=2;
            else if(it->second>2 && it->second%2==1) it->second=1;
        }
        for(auto it=m.begin();it!=m.end();++it){
            c+=it->second;
        }
        return c;
    }
};

// 3 -> 1
// 4 -> 2
// 5 -> 3 -> 1
// 6 -> 4 -> 2
// 7 -> 5