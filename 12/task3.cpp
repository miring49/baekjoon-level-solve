#include <iostream>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int x = (c*e - b*f) / (a*e - b*d);
    int y = (a*f - d*c) / (a*e - b*d);
    cout << x << " " << y;
    return 0;
}