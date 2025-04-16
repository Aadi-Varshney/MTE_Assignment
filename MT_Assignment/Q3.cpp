#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> arr = {-7, 1, 5, 2, -4, 3, 0};
    int total = 0;
    for (int num : arr)
        total += num;
    int left = 0;
    for (int i = 0; i < arr.size(); i++) {
        total -= arr[i];
        if (left == total) {
            cout << "Equilibrium index: " << i << endl;
            return 0;
        }
        left += arr[i];
    }
    cout << "No equilibrium index found." << endl;
    return 0;
}
