class Solution {
public:
    int countHillValley(vector<int>& n) {
        int c=0,i=1;
        while(i<n.size()-1){
            if(n[i-1]<n[i]){
                if(n[i]>n[i+1]){
                    c++;
                    i++;
                }
                else if(n[i]==n[i+1]){
                    i++;
                    while(i<n.size()-1){
                        if(n[i]>n[i+1]){
                            c++;
                            i++;
                            break;
                        }
                        i++;
                    }
                }
                else i++;
            }
            else i++;
        }
        i=1;
        while(i<n.size()-1){
            if(n[i-1]>n[i]){
                if(n[i]<n[i+1]){
                    c++;
                    i++;
                }
                else if(n[i]==n[i+1]){
                    i++;
                    while(i<n.size()-1){
                        if(n[i]<n[i+1]){
                            c++;
                            i++;
                            break;
                        }
                        i++;
                    }
                }
                else i++;
            }
            else i++;
        }
        return c;
    }
};

/*[1,5,5,4,1]*/