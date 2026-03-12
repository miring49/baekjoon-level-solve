#include <iostream>
#include <cmath>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

void star(int i, int j, int N){
    if (((i / N) % 3) == 1 and ((j / N) % 3) == 1){
        cout << " ";
    }
    else {
        if (N / 3 == 0) {
            cout << "*";
        }
        else {
            star(i, j, N / 3);
        }
    }
}

int main() {
    fastio;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            star(i, j, N);
        }
        cout << "\n";
    }
    return 0;
}