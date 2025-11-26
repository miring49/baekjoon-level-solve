#include <iostream>
#include <stack>
#include <string>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

string vps(const string& str){
    stack<int> s;
    for (char i : str){
        if (i == '('){
            s.push(1);
        }
        else if (s.empty()){
            return "NO";
        }
        else {
            s.pop();
        }
    }
    if (s.empty()){
        return "YES";
    }
    else {
        return "NO";
    }
}

int main() {
    fastio;
    int t; cin >> t;
    for (int i = 0; i < t; i++){
        string str; cin >> str;
        cout << vps(str) << "\n";
    }
    return 0;
}