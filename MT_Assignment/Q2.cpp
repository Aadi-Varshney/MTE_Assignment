#include <iostream>
using namespace std;
int main() {
    int arr[] = {2, 4, 5, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int prefix[n];
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    int L, R;
    cin >> L >> R;
    int rangeSum = (L == 0) ? prefix[R] : prefix[R] - prefix[L - 1];
    cout << rangeSum;
    return 0;
}