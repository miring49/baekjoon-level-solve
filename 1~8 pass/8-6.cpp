#include <iostream>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    int n = 1; // x += i
    int i = 1; // i++
    bool j = false; // 1 or n=i
    long int X;
    cin >> X;
    while(true){
        if (n >= X){
            break;
        }
        if (j){
            j = false; // 1
        }
        else{
            j = true; // n
        }
        i++;
        n += i;
    }
    if (j){
        cout << i - (n-X) << "/" << n-X + 1;
    }
    else {
        cout << n - X + 1 << "/" << i - (n - X);
    }
}
