#include <iostream>
#include <string>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        cout << string(i, ' ') << string(2 * (n - i) - 1, '*') << "\n";
    }
    for (int i = n - 2; i >= 0; --i) {
        cout << string(i, ' ') << string(2 * (n - i) - 1, '*') << "\n";
    }
    return 0;
}

