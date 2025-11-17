#include <iostream>
#include <algorithm>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

bool check (unsigned int i, unsigned int j, unsigned int k){
    unsigned int max_n = max(max(i, j),k);
    if (max_n == i){
        if (j + k > i) {
            return true;
        }
        else {
            return false;
        }
    }
    else if (max_n == j){
        if (i + k > j){
            return true;
        }
        else {
            return false;
        }
    }
    else if (max_n == k){
        if (i + j > k){
            return true;
        }
        else {
            return false;
        }
    }
    return false;
}

int main() {
    fastio;
    while (true){
        unsigned int a, b, c;
        cin >> a >> b >> c;
        if (a == 0 and b == 0 and c == 0){
            break;
        }
        else if (a == b and b == c){
            cout << "Equilateral";
        }
        else if (check(a, b, c) and (a == b or b == c or a == c)){
            cout << "Isosceles";
        }
        else if (check(a , b, c) and a != b and b != c and c != a){
            cout << "Scalene";
        }
        else if (!check(a, b, c)){
            cout << "Invalid";
        }
        cout << "\n";
    }
    return 0;
}

