#include <iostream>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int n;
int cnt = 0;
bool check1[40]; // i (같은 열, y가 같은 좌표)
bool check2[40]; // cur + i (우상단 방향 대각선, x + y가 같은 좌표)
bool check3[40]; // cur-i+n-1 (좌상단 방향 대각선, x - y + n - 1이 같은 좌표)

// i = y, cur = x

void func(int cur) {
    if (cur == n) {
        cnt++;
        return;
    }
    for (int i = 0; i < n; i++) {
        if (check1[i] or check2[cur + i] or check3[cur - i + n-1]) {
            continue;
        }
        check1[i] = true;
        check2[cur + i] = true;
        check3[cur - i + n - 1] = true;
        func(cur+1);
        check1[i] = false;
        check2[cur + i] = false;
        check3[cur - i + n - 1] = false;
    }
}


int main() {
    fastio;
    cin >> n;
    func(0);
    cout << cnt;
    return 0;
}