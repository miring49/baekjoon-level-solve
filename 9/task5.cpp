#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    int M, N;
    vector<int> Prime;
    Prime.clear();
    int sum = 0;
    cin >> N >> M;
    for (int i = N; i <= M; i++){
        int prime_check = 0;
        for (int j = 1; j <= i; j++){
            if (i % j == 0){
                prime_check++;
            }
        }
        if (prime_check == 2){
            Prime.push_back(i);
        }
    }
    if (!Prime.empty()){
        for (int k : Prime){
        sum += k;
        }
        cout << sum << "\n" << *min_element(Prime.begin(), Prime.end());
    }
    else{
        cout << -1;
    }
    return 0;
}