#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int k = 4;
    int n = arr.size();
    if(n < k) return 0;
    int maxSum = 0, windowSum = 0;
    for(int i = 0; i < k; i++)
        windowSum += arr[i];
    maxSum = windowSum;
    for(int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        if(windowSum > maxSum)
            maxSum = windowSum;
    }
    cout << maxSum;
    return 0;
}
