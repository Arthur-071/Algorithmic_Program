class Solution {
public:
    bool isArmstrong(int n) {
        if (n < 0) return false; // Armstrong numbers are non-negative

        int original = n;

        // Count digits
        int digits = 0;
        int temp = n;
        while (temp > 0) {
            temp /= 10;
            digits++;
        }

        // Compute sum of digits raised to the power of 'digits'
        int sum = 0;
        temp = n;
        while (temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        return sum == original;
    }
};
