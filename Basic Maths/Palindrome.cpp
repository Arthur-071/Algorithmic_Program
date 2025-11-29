class Solution {
public:
    bool isPalindrome(int n) {
        // Negative numbers are not palindromes
        // Also, numbers ending with 0 (but not 0 itself) cannot be palindromes
        if (n < 0 || (n % 10 == 0 && n != 0)) 
            return false;

        int reversedHalf = 0;
        while (n > reversedHalf) {
            reversedHalf = reversedHalf * 10 + (n % 10);
            n /= 10;
        }

        // For odd digit counts, reversedHalf/10 removes the middle digit
        return (n == reversedHalf || n == reversedHalf / 10);
    }
};
