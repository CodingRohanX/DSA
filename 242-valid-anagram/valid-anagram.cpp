class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> m;
        map<char,int> n;
        for(auto i: s){
            m[i]++;
        }
        for(auto i: t){
            n[i]++;
        }
        if(m==n) return 1;
        return 0;
    }
};