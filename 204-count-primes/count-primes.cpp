class Solution {
public:
    int countPrimes(int n) {
        int c = 0;
        std::vector<int> v(n, 1);
        if (n <= 2) return 0;
        v[0] = 0, v[1] = 0;
        for (int j = 2; j * j < n; j++) { 
            if (v[j]) { 
                for (int i = j * j; i < n; i += j) {
                    v[i] = 0;
                }
            }
        }
        for (int i : v) {
            if (i == 1) c++;
        }
        return c;
    }
};