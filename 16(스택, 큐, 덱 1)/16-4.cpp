#include <iostream>
#include <stack>
#include <string>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

string vps(const string& str){
    stack<char> s;
    for (char i : str){
        if (i == '('){
            s.push('(');
        }
        else if (i == '['){
            s.push('[');
        }
        else if (i == ')'){
            if (s.empty() or s.top() != '('){
                return "no";
            }
            else {
                s.pop();
            }
        }
        else if (i == ']'){
            if (s.empty() or s.top() != '['){
                return "no";
            }
            else {
                s.pop();
            }
        }
        else {
            continue;
        }
    }
    if (s.empty()){
        return "yes";
    }
    else {
        return "no";
    }
}

int main() {
    fastio;
    string str;
    while(true){
        getline(cin, str);
        if (str == "."){
            break;
        }
        else {
            cout << vps(str) << "\n";
        }
    }
    return 0;
}