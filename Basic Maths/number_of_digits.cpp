#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    // Count number of digits in an integer
    int countDigit(int n) {
        if (n == 0) return 1; // Zero has 1 digit
        n = abs(n);          // Handle negative numbers
        
        int count = 0;
        while (n > 0) {
            n /= 10;
            count++;
        }
        return count;
    }
};

int main() {
    Solution sol;
    
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = sol.countDigit(n);

    cout << "Number of digits: " << result << endl;

    return 0;
}

