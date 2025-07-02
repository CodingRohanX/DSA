class Solution {
public:
    int possibleStringCount(string w) {
        map<char,int> m;
        m[w[0]]++;
        int a=1;
        for(int i=1;i<w.size();i++){
            if(w[i-1]==w[i]) a++;
            else{
                m.clear();
                m[w[i+1]]=1;
            }
        }
        return a;
        //good
    }
};