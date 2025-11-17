#include <iostream>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    unsigned int n;
    cin >> n;

    if (n == 4 or n == 7){ // 골드바흐의 추측
        cout << -1;
    }
    else if (n % 5 == 0){
        cout << n / 5;
    }
    else if (n % 5 == 1 or n % 5 == 3){
        cout << n / 5 + 1;
    }
    else if (n % 5 == 2 or n % 5 == 4){
        cout << n / 5 + 2;
    }
    return 0;
}