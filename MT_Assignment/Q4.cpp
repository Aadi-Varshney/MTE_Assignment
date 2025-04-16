#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 3};
    int total = 0;
    for (int num : arr)
        total += num;
    int left = 0;
    bool possible = false;
    for (int i = 0; i < arr.size(); i++) {
        left += arr[i];
        if (left * 2 == total) {
            possible = true;
            break;
        }
    }
    cout << (possible ? "Yes" : "No");
    return 0;
}
