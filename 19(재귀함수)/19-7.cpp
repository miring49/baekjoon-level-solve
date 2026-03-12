#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

vector<int> v1;
vector<int> v2;
int cnt = 0;

void move(int n, int start, int end){
    cnt++;
    v1.push_back(start);
    v2.push_back(end);
}

void hanoi(int n, int start, int sub, int end){
    if (n == 1){
        move(1, start, end);
        return;
    }
    else {
        hanoi(n - 1, start, end, sub);
        move(n, start, end);
        hanoi(n - 1, sub, start, end);
    }
}

int main() {
    fastio;
    int N; cin >> N;
    hanoi(N, 1, 2, 3);
    cout << cnt << "\n";
    for (int i = 0; i < cnt; i++){
        cout << v1[i] << " " << v2[i] << "\n";
    }
    return 0;
}