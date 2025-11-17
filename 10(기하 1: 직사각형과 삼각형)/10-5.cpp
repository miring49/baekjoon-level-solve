#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    unsigned int n, min_x, min_y, max_x, max_y;
    cin >> n;
    if (n == 1){
        cout << 0;
        return 0;
    }
    vector<int> x;
    vector<int> y;
    for (int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        x.push_back(a);
        y.push_back(b);
    }
    min_x = *min_element(x.begin(), x.end());
    min_y = *min_element(y.begin(), y.end());
    max_x = *max_element(x.begin(), x.end());
    max_y = *max_element(y.begin(), y.end());
    cout << (max_x - min_x) * (max_y - min_y);
    return 0;
}