class Solution {
public:
    int countPairs(vector<int>& n, int k) {
        int a=0,s=n.size();
        for(int i=0;i<s-1;i++){
            for(int j=i+1;j<s;j++){
                if(n[i]==n[j] && (i*j)%k==0) a++;
            }
        }
        return a;
    }
};