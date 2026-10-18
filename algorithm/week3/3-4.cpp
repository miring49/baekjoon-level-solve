#include <iostream>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        string c; cin >> c;
        int open = 0;
        for (int j = 0; j < c.length(); j++) {
            if (c[j] == '(' and open >= 0) {
                open++;
            } else if (c[j] == ')' and open > 0) {
                open--;
            }
        }
        if (open == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}

