class Solution {
public:
    string largestGoodInteger(string n) {
        int p1=0,p2=1,p3=2;
        char c=' ';
        string s1;
        while(p3<n.size()){
            if(n[p1]==n[p2] && n[p2]==n[p3] && c<n[p1]) c=n[p1];
            p1++;
            p2++;
            p3++;
        }
        if(c!=' ') for(int i=0;i<3;i++) s1+=c;
        return s1;
    }
};