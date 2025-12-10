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
    int n; cin >> n;
    cout << fac(n);
    return 0;
}