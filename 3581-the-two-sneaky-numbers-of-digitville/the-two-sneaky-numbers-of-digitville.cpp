class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& n) {
        map<int,int> m;
        vector<int> v;
        for(auto i: n){
            m[i]++;
        }
        for(auto it=m.begin();it!=m.end();++it){
            if(it->second==2) v.push_back(it->first);
        }
        return v;
    }
};