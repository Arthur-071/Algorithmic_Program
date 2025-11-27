class Solution {
public:
    int countDigit(int n) {
        if (n == 0) return 1;
        n = abs(n);
        int count = 0;
        while (n > 0) {
            n /= 10;
            count++;
        }
        return count;
    }
};


