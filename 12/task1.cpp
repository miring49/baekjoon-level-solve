#include <iostream>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    unsigned int N, M;
    cin >> N >> M;
    unsigned int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    unsigned int sum, max_check = 0;
    for (int i = 0; i < N-2; i++){
        for (int j = i+1; j < N-1; j++){
            for (int k = j+1; k < N; k++){
                sum = arr[i] + arr[j] + arr[k];
                if (sum <= M and max_check < sum){
                    max_check = sum;
                }
            }
        }
    }
    cout << max_check;
    return 0;
}