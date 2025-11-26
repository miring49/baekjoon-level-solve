#include <iostream>
#include <stack>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;


int main() {
    fastio;
    int n; cin >> n;
    int t, i = 1;
    stack<int> s;
    while (n--){
        cin >> t;
        if (i == t) {
            i++;
        }
        else {
            s.push(t);
        }
        while(!s.empty() and s.top() == i){
            s.pop();
            i++;
        }
    }
    if (s.empty()) {
        cout << "Nice" << "\n";
    }
    else {
        cout << "Sad" << "\n";
    }
    return 0;
}