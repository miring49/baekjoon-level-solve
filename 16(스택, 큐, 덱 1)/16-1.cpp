#include <iostream>
#include <stack>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;


int main() {
    fastio;
    stack<int> s;
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int task; cin >> task;
        if (task == 1){
            int num; cin >> num;
            s.push(num);
        }
        else if (task == 2){
            if (!s.empty()){
                cout << s.top() << "\n";
                s.pop();
            }
            else {
                cout << -1 << "\n";
            }
        }
        else if (task == 3){
            cout << s.size() << "\n";
        }
        else if (task == 4){
            if (!s.empty()){
                cout << 0 << "\n";
            }
            else {
                cout << 1<< "\n";
            }
        }
        else if (task == 5){
            if (!s.empty()){
                cout << s.top() << "\n";
            }
            else {
                cout << -1 << "\n";
            }
        }
    }
    return 0;
}