#include <iostream>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    unsigned int a, b, c;
    cin >> a >> b >> c;
    unsigned int max_n = max(max(a, b),c);
    if (max_n == a){
        if (b + c <= a){
            a = b + c - 1;
        }
    }
    else if (max_n == b){
        if (a + c <= b){
            b = a + c - 1;
        }
    }
    else if (max_n == c){
        if (a + b <= c){
            c = a + b - 1;
        }
    }
    cout << a + b + c;
    return 0;
}