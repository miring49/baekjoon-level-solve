#include <iostream>
#include <deque>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;


int main() {
    fastio;
    deque< pair<int,int> > d;
    int n; cin >> n;
    for (int i = 1; i <= n; i++){
        int num; cin >> num;
        d.push_back(make_pair(num,i));
    }
    while (!d.empty()){
        int c = d.front().first;
        cout << d.front().second;
        d.pop_front();

        if (d.empty()){
            break;
        }
        if (c > 0){
            for (int i = 0; i < c-1; i++){
                d.push_back(d.front());
                d.pop_front();
            }
        }
        else {
            for (int i = 0; i < (-1)*c; i++){
                d.push_front(d.back());
                d.pop_back();
            }
        }
    }
    return 0;
}