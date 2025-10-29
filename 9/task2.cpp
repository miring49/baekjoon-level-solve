#include <iostream>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    int N, K;
    int a = 0;
    cin >> N >> K;
    for (int i = 1; i <= N; i++){
        if (N % i == 0){
            a++;
        }
        if (K == a){
            cout << i;
            break;
        }
    }
    if (K > a){
        cout << 0;
    }
    return 0;
}