class Solution {
public:
    int countSegments(string s) {
        int c=0,f=0;
        if(s.size()==0) return 0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' ') f=1;
            else if(s[i]==' ' && f==1){
                c++;
                f=0;
            }
        }
        if(s[s.size()-1]!=' ') return c+1;
        return c;
    }
};