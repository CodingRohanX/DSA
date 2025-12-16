class Solution {
public:
    vector<string> validateCoupons(vector<string>& c, vector<string>& b, vector<bool>& a) {
        vector<string> v;
        vector<string> d;
        vector<string> e;
        vector<string> f;
        string s;
        for(int i=0;i<a.size();i++){
            if(a[i]==true){
                s=c[i];
                for(int j=0;j<c[i].size();j++){
                    if(!((s[j]>='A' && s[j]<='Z') || (s[j]>='a' && s[j]<='z') || (s[j]>='0' && s[j]<='9') || s[j]=='_')){
                        c[i]="";
                        break;
                    }
                }
            }
            else c[i]="";
        }
        for(int i=0;i<a.size();i++){
            if(b[i]=="electronics" && c[i].size()>0){
                v.push_back(c[i]);
            }
        }
        sort(v.begin(),v.end());
        for(int i=0;i<a.size();i++){
            if(b[i]=="grocery" && c[i].size()>0){
                d.push_back(c[i]);
            }
        }
        sort(d.begin(),d.end());
        for(int i=0;i<a.size();i++){
            if(b[i]=="pharmacy" && c[i].size()>0){
                e.push_back(c[i]);
            }
        }
        sort(e.begin(),e.end());
        for(int i=0;i<a.size();i++){
            if(b[i]=="restaurant" && c[i].size()>0){
                f.push_back(c[i]);
            }
        }
        sort(f.begin(),f.end());
        v.insert(v.end(), d.begin(), d.end());
        v.insert(v.end(), e.begin(), e.end());
        v.insert(v.end(), f.begin(), f.end());
        return v;
    }
};