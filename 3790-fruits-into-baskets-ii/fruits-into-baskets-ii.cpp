class Solution {
public:
    int numOfUnplacedFruits(vector<int>& f, vector<int>& b) {
        int c=0;
        for(int i=0;i<f.size();i++){
            for(int j=0;j<b.size();j++){
                if(b[j]>=f[i]){
                    c++;
                    b[j]=-1;
                    break;
                }
            }
        }
        return f.size()-c;
    }
};