#include <iostream>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int n, m;
int arr[9];
bool isused1[9];

void func(int num, int cnt){

    if(cnt == m){
        for(int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    for(int i = num; i <= n; i++){
        if(!isused1[i]){
            arr[cnt] = i;
            isused1[i] = true;
            func(i+1, cnt+1);
            isused1[i] = false;
        }
    }
}

int main() {
    fastio;
    cin >> n >> m;
    func(1, 0);
    return 0;
}