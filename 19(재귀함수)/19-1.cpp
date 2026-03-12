#include <iostream>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

long long factorial(int a)
{
	if (a == 0 or a == 1) return 1;
	return a * factorial(a - 1);
}

int main() {
    fastio;
    int n; cin >> n;
    cout << factorial(n);
    return 0;
}