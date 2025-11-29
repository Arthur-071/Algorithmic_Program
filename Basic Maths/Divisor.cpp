class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> result;
        if (n <= 0) return result; // no divisors for non-positive numbers

        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                result.push_back(i);
                if (i != n / i)   // avoid adding the square root twice
                    result.push_back(n / i);
            }
        }

        sort(result.begin(), result.end());
        return result;
    }
};
