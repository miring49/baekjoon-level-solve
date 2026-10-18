#include <iostream>
#include <cmath>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;


int main() {
    fastio;
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    double avg = 0;
    for (int i = 0; i < n; i++) {
        avg += v[i];
    }
    avg /= n;

    int idx = 0;
    for (int i = 1; i < n; i++) {
        if (abs(v[i] - avg) < abs(v[idx] - avg)) {
            idx = i;
        }
    }

    cout << round(avg) << " " << idx + 1 << "\n";
    return 0;
}
