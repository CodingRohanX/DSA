class Solution {
public:
    int totalMoney(int n) {
        int w = n / 7;
        int d = n % 7;

        int total = 28 * w + 7 * (w * (w - 1)) / 2;

        int s = w + 1;
        total += (2 * s + (d - 1)) * d / 2;

        return total;
    }
};

/*
1 2 3 4 5 6 7
2 3 4 5 6 7 8
3 4 5 6 7 8 9
*/