class Solution {
public:
    int totalFruit(vector<int>& f) {
        map<int,int> m;
        int mx=1,p1=0,p2=0;
        //m[f[0]]++;
        while(p2<f.size()){
            m[f[p2]]++;
            if(m.size()>2){
                while(p1<f.size() && m.size()>2){
                    m[f[p1]]--;
                    if(m[f[p1]]==0) m.erase(f[p1]);
                    p1++;
                }
            }
            mx=max(p2-p1+1,mx);
            p2++;
        }
        return mx;
    }
};