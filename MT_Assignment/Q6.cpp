#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    string s = "abcabcbb";
    unordered_set<char> seen;
    int maxLen = 0, start = 0;
    for (int end = 0; end < s.length(); end++) {
        while (seen.count(s[end])) {
            seen.erase(s[start]);
            start++;
        }
        seen.insert(s[end]);
        int len = end - start + 1;
        if (len > maxLen)
            maxLen = len;
    }
    cout << maxLen;
    return 0;
}
