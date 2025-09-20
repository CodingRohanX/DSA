class Solution {
public:
    int rearrangeCharacters(string s, string t) {
        map<char,int> m;
        int mn=INT_MAX;
        for(auto i: s){
            m[i]++;
        }
        /* for(int i=0;i<t.size();i++){
            mn=min(mn,m[t[i]]);
        } */
        int c=0,i=0;
        while(m[t[i]]>0){
            m[t[i]]--;
            c++;
            i++;
            if(i==t.size()) i=0;
        }
        return c/t.size();
    }
};