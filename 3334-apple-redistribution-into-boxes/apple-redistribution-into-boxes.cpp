class Solution {
public:
    int minimumBoxes(vector<int>& a, vector<int>& c) {
        int s=0,s1=0;
        for(auto i: a){
            s+=i;
        }
        sort(c.begin(),c.end());
        reverse(c.begin(),c.end());
        for(int i=0;i<c.size();i++){
            s1+=c[i];
            if(s1>=s) return i+1;
        }
        return 0;
    }
};