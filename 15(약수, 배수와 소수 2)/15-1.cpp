#include <iostream>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int Euclidean(int x, int y) // 유클리드 호제법
{
    int r = x % y;
    if (r == 0) {
      return y;
    }
    return Euclidean(y, r);
}

int main() {
    fastio;
    unsigned int t; cin >> t;
    for (int i = 0; i < t; i++){
        int a, b; cin >> a >> b;
        cout << a * b / Euclidean(a, b) << "\n";
    }
    return 0;
}