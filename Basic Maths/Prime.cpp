class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) return false;          // 0, 1, and negatives are not prime
        if (n <= 3) return true;           // 2 and 3 are prime
        if (n % 2 == 0 || n % 3 == 0) 
            return false;                  // eliminate multiples of 2 and 3

        // check numbers of the form 6k ± 1 up to sqrt(n)
        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
        }
        return true;
    }
};
