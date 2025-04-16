#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;
    int l = 0, r = arr.size() - 1;
    while (l < r) {
        int sum = arr[l] + arr[r];
        if (sum == target) {
            cout << arr[l] << " " << arr[r];
            return 0;
        } else if (sum < target) {
            l++;
        } else {
            r--;
        }
    }
    cout << "No pair found";
    return 0;
}
