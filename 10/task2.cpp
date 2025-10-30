#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    unsigned int x, y, w, h;
    cin >> x >> y >> w >> h;
    vector<unsigned int> distances;
    distances.push_back(x);
    distances.push_back(y);
    distances.push_back(w - x);
    distances.push_back(h - y);
    cout << *min_element(distances.begin(), distances.end());
    return 0;
}