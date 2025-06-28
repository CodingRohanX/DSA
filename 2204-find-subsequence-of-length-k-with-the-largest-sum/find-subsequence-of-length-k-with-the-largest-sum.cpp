class Solution {
public:
    vector<int> maxSubsequence(vector<int>& n, int k) {
        vector<int> v;
        multimap<int,int> m,a;
        for(int i=0;i<n.size();i++){
            m.insert({n[i],i});
        }
        auto it=m.rbegin();
        while(k>0){
            a.insert({it->second,it->first});
            ++it;
            k--;
        }
        for (auto it = a.begin(); it != a.end(); ++it) {
            v.push_back(it->second);
        }
        return v;
    }
};