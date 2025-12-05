#include <iostream>
#include <queue>
#include <string>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;


int main() {
    fastio;
    queue<int> q;
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        string a;
        cin >> a;
        if (a == "push"){
            int b; cin >> b;
            q.push(b);
        }
        else if (a == "pop"){
            if (q.empty()){
                cout << -1 << "\n";
            }
            else{
                cout << q.front() << "\n";
                q.pop();
            }
        }
        else if (a == "size"){
            cout << q.size() << "\n";
        }
        else if (a == "empty"){
            if (q.empty()){
                cout << 1 << "\n";
            }
            else {
                cout << 0 << "\n";
            }
        }
        else if (a == "front"){
            if (q.empty()){
                cout << -1 << "\n";
            }
            else {
                cout << q.front() << "\n";
            }
        }
        else if (a == "back"){
            if (q.empty()){
                cout << -1 << "\n";
            }
            else {
                cout << q.back() << "\n";
            }
        }
    }
    return 0;
}