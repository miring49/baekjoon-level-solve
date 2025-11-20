#include <iostream>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int Euclidean(int x, int y)
{
    int r = x % y;
    if (r == 0) {
      return y;
    }
    return Euclidean(y, r);
}

int main() {
    fastio;
    int a, b, c, d; cin >> a >> b >> c >> d;
    int i = a * d + b * c;
    int j = b * d;
    int k = Euclidean(i, j);
    cout << i / k << " " << j / k;
    return 0;
}