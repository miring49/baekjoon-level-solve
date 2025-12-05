#include <iostream>
#include <deque>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;


int main() {
    fastio;
    deque<int> d;
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int c; cin >> c;
        if (c == 1){
            int num; cin >> num;
            d.push_front(num);
        }
        else if (c == 2){
            int num; cin >> num;
            d.push_back(num);
        }
        else if (c == 3){
            if (d.empty()){
                cout << -1 << "\n";
            }
            else {
                cout << d.front() << "\n";
                d.pop_front();
            }
        }
        else if (c == 4){
            if (d.empty()){
                cout << -1 << "\n";
            }
            else {
                cout << d.back() << "\n";
                d.pop_back();
            }
        }
        else if (c == 5){
            cout << d.size() << "\n";
        }
        else if (c == 6){
            if (d.empty()){
                cout << 1 << "\n";
            }
            else {
                cout << 0 << "\n";
            }
        }
        else if (c == 7){
            if (d.empty()){
                cout << -1 << "\n";
            }
            else {
                cout << d.front() << "\n";
            }
        }
        else if (c == 8){
            if (d.empty()){
                cout << -1 << "\n";
            }
            else {
                cout << d.back() << "\n";
            }
        }
    }
    return 0;
}