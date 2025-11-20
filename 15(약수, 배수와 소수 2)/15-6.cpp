#include <iostream>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

bool prime(int num)
{
    if (num <= 1)
        return false;

    if (num == 2 || num == 3)
        return true;

    if (num % 2 == 0 || num % 3 == 0)
        return false;

    for (int i = 5; i * i <= num; ++i)
    {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    fastio;
    int n, m; cin >> n >> m;
    for (int i = n; i <= m; i++){
        if (prime(i)){
            cout << i << "\n";
        }
    }
    return 0;
}