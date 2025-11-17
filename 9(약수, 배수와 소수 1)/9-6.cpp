#include <iostream>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    long int N;
    cin >> N;
    for (int i = 2; i <= N;){
        if (N % i == 0){
            cout << i << "\n";
            N /= i;
        }
        else {
            i++;
        }
    }
    return 0;
}