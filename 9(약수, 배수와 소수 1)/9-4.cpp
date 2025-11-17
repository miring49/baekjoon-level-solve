#include <iostream>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    int N, Prime = 0;
    cin >> N;
    for (int i = 0; i < N; i++){
        int P;
        cin >> P;
        int K = 0;
        for (int j = 1; j <= P; j++){
            if (P % j == 0){
                K++;
            }
        }
        if (K == 2){
           Prime++;
        }
    }
    cout << Prime;
    return 0;
}