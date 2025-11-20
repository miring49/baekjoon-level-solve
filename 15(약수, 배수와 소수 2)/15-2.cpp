#include <iostream>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

long long int Euclidean(long long int x, long long int y) // 15-1과 동일
{
    int r = x % y;
    if (r == 0) {
      return y;
    }
    return Euclidean(y, r);
}

int main() {
    fastio;
    long long int a, b; cin >> a >> b;
    cout << a * b / Euclidean(a, b) << "\n";
    return 0;
}