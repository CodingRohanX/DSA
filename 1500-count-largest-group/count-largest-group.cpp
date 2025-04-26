class Solution {
public:
    int check(int n){
        int s=0;
        while(n>0){
            s+=n%10;
            n/=10;
        }
        return s;
    }

    int countLargestGroup(int n) {
        map<int,vector<int>> m;
        int a=0,f=0;
        for(int i=1;i<=n;i++){
            m[check(i)].push_back(i);
        }
        for(auto it=m.begin();it!=m.end();++it){
            a = max(a, (int)it->second.size());
        }
        for(auto it=m.begin();it!=m.end();++it){
            if(it->second.size()==a) f++;
        }
        return f;
    }
};