#include <iostream>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    int a1, a0;
    int c, n0;
    cin >> a1 >> a0;
    cin >> c;
    cin >> n0;
    if (a1*n0+a0 <= c * n0 and a1 <= c){
        cout << 1;
    }
    else {
        cout << 0;
    }
    return 0;
}