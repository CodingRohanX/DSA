class Solution {
public:
    string addBinary(string a, string b) {
        int ap=a.size()-1,bp=b.size()-1;
        char c='0',d1,d2;
        string s="";
        while(ap>=0 || bp>=0){
            if(ap<0) d1='0';
            else d1=a[ap];
            if(bp<0) d2='0';
            else d2=b[bp];
            if(d1=='0' && d2=='0'){
                if(c=='0') s+='0';
                else{
                    s+='1';
                    c='0';
                }
            }
            else if(d1=='1' && d2=='1') {
                if(c=='0') s+='0';
                else s+='1';
                c='1';
            }
            else{
                if(c=='0') s+='1';
                else{
                    s+='0';
                    c='1';
                }
            }
            ap--;
            bp--;
            /* if(ap<0) a[ap]=0;
            if(bp<0) b[bp]=0; */
        }
        if(c=='1') s+='1';
        reverse(s.begin(),s.end());
        return s;
    }
};