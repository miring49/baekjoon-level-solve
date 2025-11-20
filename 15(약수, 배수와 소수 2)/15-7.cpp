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
    while(true){
        int n; cin >> n;
        if (!n){
            break;
        }
        int count = 0;
        for (int i = n + 1; i <= 2*n; i++){
            if (prime(i)){
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}