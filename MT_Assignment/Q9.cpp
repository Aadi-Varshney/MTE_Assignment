#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> strs = {"flower", "flow", "flight"};
    if (strs.empty()) {
        cout << "";
        return 0;
    }

    string prefix = strs[0];
    for (int i = 1; i < strs.size(); i++) {
        while (strs[i].find(prefix) != 0)
            prefix = prefix.substr(0, prefix.length() - 1);
        if (prefix.empty())
            break;
    }
    cout << prefix;
    return 0;
}
