#include <iostream>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int fac(int n){
    if (n <= 1){
        return 1;
    }
    else {
        return n*fac(n-1);
    }
}


int main() {
    fastio;
    int n, k; cin >> n >> k;
    cout << fac(n) / (fac(k)*fac(n-k));
    return 0;
}