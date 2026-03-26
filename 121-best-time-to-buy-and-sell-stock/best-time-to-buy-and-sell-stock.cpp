class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m = prices[0];
        int p = 0;
        int p_temp = 0;
        for(int i=0;i<prices.size();i++){
            //if(m-prices[i]>0) p=m-prices[i];
            if (m>prices[i]) m = prices[i];
            else{
                p_temp = prices[i] - m;
                if(p<p_temp){
                    p = p_temp;
                }
            }
            //p=prices[i]-m;
            //m = min(m,prices[i]);
        }
        return p;
    }
};