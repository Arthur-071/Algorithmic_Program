#include <iostream>
using namespace std;

void print1ToN(int n) {
    if (n == 0) return;      // Base case
    print1ToN(n - 1);        // Recursive call
    cout << n << " ";        // Print after recursion
}

int main() {
    int n;
    cin >> n;
    print1ToN(n);
    return 0;
}
