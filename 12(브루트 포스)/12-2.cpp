#include <iostream>
#include <string>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    string N_str;
    unsigned int out = 0;
    cin >> N_str;
    int N_len = N_str.length();
    int N_num = stoi(N_str);
    for (int i = N_num - (N_len * 9); i < N_num; i++){
        int num = i;
        int sum = 0;
        while (num != 0){
            sum += num % 10;
            num /= 10;
        }
        if (sum + i == N_num){
            out = i;
            break;
        }
    }
    cout << out;
    return 0;
}