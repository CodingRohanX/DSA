class Solution {
public:
    bool check(string w){
        if(w[0]>='A' && w[0]<='Z') {}
        else return 0;
        for(int i=1;i<w.size();i++){
            if(w[i]>='a' && w[i]<='z') continue;
            else return 0;
        }
        return 1;
    }

    bool detectCapitalUse(string word) {
        int f;
        if(word[0]>='A' && word[0]<='Z') f=1;
        else f=0;
        for(auto i: word){
            if(f==1 && i>='A' && i<='Z') continue;
            if(f==0 && i>='a' && i<='z') continue;
            else return check(word);
        }
        return 1;
    }
};