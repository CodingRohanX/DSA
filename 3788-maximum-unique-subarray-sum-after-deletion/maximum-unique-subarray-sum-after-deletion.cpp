class Solution {
public:
    int maxSum(vector<int>& n1) {
        map<int,int> m;
        int p=0,n=0;
        for(auto i: n1){
            m[i]++;
        }
        for(auto it=m.begin();it!=m.end();++it){
            if(it->first<0) n=it->first;
            else{
                p+=it->first;
            }
        }
        if(p>0) return p;
        else if(m[0]>0) return 0;
        /* else if(n<0) */ return n;
        /* return 0; */
    }
};

