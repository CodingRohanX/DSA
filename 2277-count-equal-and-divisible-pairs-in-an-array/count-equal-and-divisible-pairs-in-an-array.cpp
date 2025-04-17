class Solution {
public:
    int countPairs(vector<int>& n, int k) {
        int a=0;
        for(int i=0;i<n.size()-1;i++){
            for(int j=i+1;j<n.size();j++){
                if(n[i]==n[j] && (i*j)%k==0) a++;
            }
        }
        return a;
    }
};