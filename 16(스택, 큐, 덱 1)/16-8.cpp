#include <iostream>
#include <queue>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;


int main() {
    fastio;
    queue<int> q;
    int n, k; cin >> n >> k;
    for (int i = 1; i <= n; i++){
        q.push(i);
    }
    cout << "<";
    while (q.size() != 0){
        for (int i = 1; i < k; i++){
            q.push(q.front());
            q.pop();
        }
        cout << q.front();
        if (q.size() > 1){
            cout << ", ";
        }
        q.pop();
    }
    cout << ">";
    return 0;
}