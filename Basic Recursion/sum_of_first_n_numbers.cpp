#include <iostream>
using namespace std;

int sumN(int n) {
    if (n == 0) return 0;      // Base case
    return n + sumN(n - 1);    // Recursive call
}

int main() {
    int n;
    cin >> n;
    cout << sumN(n);
    return 0;
}
