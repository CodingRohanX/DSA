class Solution {
public:
    int maximumUniqueSubarray(vector<int>& n) {
        if(n.size()==1) return n[0];
        int p1=0,p2=0,sum=n[0],a=INT_MIN;
        map<int,int> m;
        m[n[0]]++;
        while(p2<n.size()){
            if(p2==n.size()-1) break;
            if(m[n[p2+1]]==1){
                p2++;
                m[n[p2]]++;
                sum+=n[p2];
                while(m[n[p2]]>1){
                    m[n[p1]]--;
                    sum-=n[p1];
                    p1++;
                }
            }
            else{
                p2++;
                m[n[p2]]++;
                sum+=n[p2];
            }
            a=max(sum,a);
        }
        return a;
    }
};