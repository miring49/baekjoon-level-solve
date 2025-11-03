#include <iostream>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    unsigned long n;
    cin >> n;
    cout << n*(n-1)*(n-2)/6 << "\n" << 3;
    return 0;
}