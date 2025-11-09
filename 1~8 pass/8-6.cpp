#include <iostream>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    int n = 1;
    bool j = false;
    long int X;
    cin >> X;
    while(n < X){
        X -= n;
        n++;
        j = !j;
    }
    if (j){
        cout << X << "/" << n + 1 - X;
    }
    else {
        cout << n + 1 - X << "/" << X;
    }
    return 0;
}
