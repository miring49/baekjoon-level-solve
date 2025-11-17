#include <iostream>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    unsigned int n, count; cin >> n;
    int arr[10001] = {0};

    for (unsigned int i = 0; i < n; i++){ // count sort
        cin >> count;
        arr[count]++;
    }

    for (unsigned int i = 1; i < 10001; i++){  // 배열 크기 만큼
        for (unsigned int j = 0; j < arr[i]; j++){ // 배열의 i번째 항의 값만큼
            cout << i << "\n";
        }
    }
    return 0;
}