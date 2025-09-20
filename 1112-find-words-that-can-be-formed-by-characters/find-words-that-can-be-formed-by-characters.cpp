class Solution {
public:
    int countCharacters(vector<string>& w, string c) {
        map<char,int> m;
        map<char,int> m2;
        string s;
        for(auto i: c){
            m[i]++;
        }
        int cn=0,f=0;
        for(int i=0;i<w.size();i++){
            m2=m;
            s=w[i];
            for(int j=0;j<s.size();j++){
                if(m2[s[j]]==0){
                    f=1;
                    break;
                }
                else m2[s[j]]--;
            }
            if(f==0) cn+=s.size();
            f=0;
        }
        return cn;
    }
};