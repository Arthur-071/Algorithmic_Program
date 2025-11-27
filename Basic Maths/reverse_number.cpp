#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

class Solution {
public:
    int reverseNumber(int n) {
        long long rev = 0;       // Use long long to detect overflow
        int sign = n < 0 ? -1 : 1;
        n = abs(n);

        while (n > 0) {
            rev = rev * 10 + (n % 10);
            n /= 10;

            // Check for overflow beyond 32-bit integer
            if (rev > INT_MAX) return 0;
        }

        return sign * (int)rev;
    }
};

int main() {
    Solution sol;

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = sol.reverseNumber(n);

    cout << "Reversed number: " << result << endl;

    return 0;
}
