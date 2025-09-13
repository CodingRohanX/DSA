class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int> m;
        int mv=0,mc=0;
        for(auto i: s){
            m[i]++;
        }
        for(auto it=m.begin();it!=m.end();++it){
            if(it->first=='a' || it->first=='e' || it->first=='i' || it->first=='o' || it->first=='u'){
                if(it->second>mv) mv=it->second;
            }
            else{
                if(it->second>mc) mc=it->second; 
            }
        }
        return mv+mc;
    }
};