#include <iostream>
#include <vector>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    int N;
    vector<int> v;
    while(true){
        int sum = 0;
        v.clear();
        cin >> N;
        if (N == -1){
            break;
        }
        for (int i = 1; i < N; i++){
            if (N % i == 0){
                v.push_back(i);
                sum += i;
            }
        }
        if (sum == N){
            cout << N << " = ";
            for (int j = 0; j < v.size(); j++){
                cout << v[j];
                if (j < v.size()-1){
                    cout << " + ";
                }
            }
        }
        else {
            cout << N << " is NOT perfect.";
        }
        cout << "\n";
    }
    return 0;
}