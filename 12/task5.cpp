#include <iostream>
#include <string>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    unsigned int n, count = 0, num = 665;
    cin >> n;
    while(true){
        if (to_string(num).find("666") != string::npos){
            count++;
        }
        if (count == n){
            cout << num;
            break;
        }
        num++;
    }
    return 0;
}