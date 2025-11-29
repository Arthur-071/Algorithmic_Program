class Solution {
public:
    int GCD(int n1, int n2) {
        // Ensure GCD is always non-negative
        n1 = abs(n1);
        n2 = abs(n2);

        // Euclidean algorithm
        while (n2 != 0) {
            int temp = n2;
            n2 = n1 % n2;
            n1 = temp;
        }
        return n1;
    }
};
