class Solution {
public:
    int maximum69Number (int n) {
        string s=to_string(n);
        for(auto &i : s){
            if(i=='6'){
                i='9';
                break;
            }
        }
        return stoi(s);
    }
};