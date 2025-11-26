#include <iostream>
#include <stack>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;


int main() {
    fastio;
    stack<int> s;
    int k, sum = 0; cin >> k;
    for (int i = 0; i < k; i++){
        int num; cin >> num;
        if(num == 0){
            sum -= s.top();
            s.pop();
        }
        else {
            s.push(num);
            sum += num;
        }
    }
    cout << sum;
    return 0;
}