#include <iostream>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int num(int a) {
    if (a == 0) return 0;
    else if (a == 1) return 1;
    else return num(a-1) + num(a-2);
}

int main() {
    fastio;
    int n; cin >> n;
    cout << num(n);
    return 0;
}