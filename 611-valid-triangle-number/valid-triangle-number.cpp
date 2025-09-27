class Solution {
public:
    int triangleNumber(vector<int>& n) {
        if(n.size()<3) return 0;
        sort(n.begin(),n.end());
        int p1=0,p2=1,p3=2,a=0;
        for(int i=0;i<n.size()-2;i++){
            for(int j=i+1;j<n.size()-1;j++){
                for(int k=j+1;k<n.size();k++){
                    if(n[i]+n[j]>n[k]){
                        a++;
                        //break;
                    }
                    else /* if(n[i]+n[j]>pow(n[k],2)) */{
                        break;
                    }
                }
            }
        }
        return a;
    }
};

// 1 2 3 4 5 