#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end) {
    if (start >= end) return;          // Base case
    swap(arr[start], arr[end]);        // Swap elements
    reverseArray(arr, start + 1, end); // Recursive call
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    reverseArray(arr, 0, n - 1);

    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}
