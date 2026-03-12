#include <iostream>
#include <cmath>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

void Cantor_set(char* arr, int start, int end){
    if (start > end){
        return;
    }
    else if (start == end){
        arr[start] = '-';
    }
    else {
        int div = (end - start + 1) / 3 - 1;
        Cantor_set(arr, start, start + div);
        Cantor_set(arr, end - div, end);
    }

}

int main() {
    fastio;
    int N;
    char* a;
    while(cin >> N){
        int pow_N = int(pow(3, N));
        a = new char [pow_N];
        fill_n(a, pow_N, ' ');
        a[pow_N] = '\0';
        Cantor_set(a, 0, pow_N - 1);
        cout << a << "\n";
        delete[] a;
    }

    return 0;
}