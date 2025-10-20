class Solution {
public:
    int finalValueAfterOperations(vector<string>& o) {
        int a=0;
        for(auto i: o){
            for(auto f: i){
                if(f=='+'){
                    a++;
                    break;
                }
                else if(f=='-'){
                    a--;
                    break;
                }
            }
        }
        return a;
    }
};
//Hel