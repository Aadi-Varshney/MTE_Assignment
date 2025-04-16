#include <iostream>
using namespace std;

int main() {
    string s = "babad", res = "";
    int n = s.length();
    for (int i = 0; i < n; i++) {
        int l = i, r = i;
        while (l >= 0 && r < n && s[l] == s[r]) {
            if (r - l + 1 > res.length())
                res = s.substr(l, r - l + 1);
            l--; r++;
        }
        l = i, r = i + 1;
        while (l >= 0 && r < n && s[l] == s[r]) {
            if (r - l + 1 > res.length())
                res = s.substr(l, r - l + 1);
            l--; r++;
        }
    }
    cout << res;
    return 0;
}
