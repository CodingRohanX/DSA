class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if(s.size()==0) return 0;
        map<char,int> m;
        int a=0,j=0,f=0;
        for(int i=0;i<s.size();i++){
            if(m[s[i]]>0){
                a=max(i-j,a);
                j++;
                i=j;
                m.clear();
                f=1;
            }
            m[s[i]]++;
        }
        a=max(n-j,a);
        if(f==0) return s.size();
        return a;
    }
};