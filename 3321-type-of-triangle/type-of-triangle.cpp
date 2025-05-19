class Solution {
public:
    string triangleType(vector<int>& n) {
        int p1=0,p2=1,p3=2;
        if(n[p1]+n[p2]<=n[p3] || n[p2]+n[p3]<=n[p1] || n[p1]+n[p3]<=n[p2]) return "none";
        if(n[p1]==n[p2] && n[p2]==n[p3]) return "equilateral";
        else if(n[p1]==n[p2] || n[p2]==n[p3] || n[p1]==n[p3]) return "isosceles";
        else if(n[p1]+n[p2]>n[p3] && n[p2]+n[p3]>n[p1] && n[p1]+n[p3]>n[p2]) return "scalene";
        return "none";
    }
};