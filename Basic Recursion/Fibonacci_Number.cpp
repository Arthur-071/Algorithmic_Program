#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0;        // Base case
    if (n == 1) return 1;        // Base case
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
}

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}
