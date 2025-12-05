#include <iostream>
#include <deque>
#include <vector>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;


int main() {
    fastio;
    int n; cin >> n;
    deque<int> d;
    vector<int> check(n);
    for (int i = 0; i < n; i++){
        cin >> check[i];
    }
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        if (check[i] == 0){
            d.push_back(x);
        }
    }
    int m; cin >> m;
    for (int j = 0; j < m; j++){
        int y; cin >> y;
        d.push_front(y);
        cout << d.back() << " ";
        d.pop_back();
    }
    return 0;
}