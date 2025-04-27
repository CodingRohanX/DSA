class Solution {
public:
    string addStrings(string n1, string n2) {
        int p1=n1.size()-1;
        int p2=n2.size()-1;
        int c=0,a,b,t;
        string ans="",temp="";
        while(p1>=0 || p2>=0){
            if(p1>=0) a=n1[p1]-'0';
            else a=0;
            if(p2>=0) b=n2[p2]-'0';
            else b=0;
            t=a+b+c;
            temp=to_string(t%10);
            c=t/10;
            ans+=temp;
            temp="";
            if(p1>=0) p1--;
            if(p2>=0) p2--;
        }
        if(c>0) temp=to_string(c);
        ans+=temp;
        reverse(ans.begin(),ans.end());
        return ans;
    }
};