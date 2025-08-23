class Solution {
public:
    int minimumArea(vector<vector<int>>& g) {
        int r,l,d,u,f=0;
        for(int i=0;i<g.size();i++){
            for(int j=0;j<g[0].size();j++){
                if(g[i][j]==1){
                    u=i;
                    f=1;
                    break;
                }
            }
            if(f==1) break;
        }
        f=0;
        for(int i=g.size()-1;i>0;i--){
            for(int j=0;j<g[0].size();j++){
                if(g[i][j]==1){
                    d=i;
                    f=1;
                    break;
                }
            }
            if(f==1) break;
        }
        f=0;
        for(int j=0;j<g[0].size();j++){
            for(int i=0;i<g.size();i++){
                if(g[i][j]==1){
                    l=j;
                    f=1;
                    break;
                }
            }
            if(f==1) break;
        }
        f=0;
        for(int j=g[0].size()-1;j>0;j--){
            for(int i=0;i<g.size();i++){
                if(g[i][j]==1){
                    r=j;
                    f=1;
                    break;
                }
            }
            if(f==1) break;
        }
        l=r-l+1;
        u=d-u+1;
        l=l*u;
        return abs(l);
    }
};

/*
0 1 0
1 0 1
0 0 1
l:0 r:2 2+1
u:0 d:1 1+1
l:0 r:2 2+1
l:2 u:0 2+1
*/