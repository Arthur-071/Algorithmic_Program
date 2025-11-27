class Solution {
public:
    int reverseNumber(int n) {
        long long rev = 0;
        int sign = n < 0 ? -1 : 1;
        n = abs(n);

        while (n > 0) {
            rev = rev * 10 + (n % 10);
            n /= 10;

            // 32-bit integer overflow check
            if (rev > INT_MAX) return 0;
        }

        return sign * (int)rev;
    }
};


    cout << "Reversed number: " << result << endl;

    return 0;
}
