#include <iostream>
#include <string>
#include <algorithm>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

string WB[8] = {"WBWBWBWB","BWBWBWBW","WBWBWBWB",
                "BWBWBWBW","WBWBWBWB","BWBWBWBW",
                "WBWBWBWB","BWBWBWBW"};
string BW[8] = {"BWBWBWBW","WBWBWBWB","BWBWBWBW",
                "WBWBWBWB","BWBWBWBW","WBWBWBWB",
                "BWBWBWBW","WBWBWBWB"};
string arr[50];

int chWB(int a, int b);
int chBW(int a, int b);

int main() {
    fastio;
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    cin.ignore();

    for (int i = 0; i < n; i++){
        getline(cin, arr[i]);
    }

    int chval = 64;

    for (int j = 0; j + 8 <= n; j++){
        for (int k = 0; k + 8 <= m; k++){
            int t = min(chWB(j, k), chBW(j, k));
            if (t < chval){
                chval = t;
            }
        }
    }

    cout << chval;
    return 0;
}

int chWB(int a, int b){
    int ch = 0;
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            if(arr[a + i][b + j] != WB[i][j]){
                ch++;
            }
        }
    }
    return ch;
}

int chBW(int a, int b){
    int ch = 0;
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            if(arr[a + i][b + j] != BW[i][j]){
                ch++;
            }
        }
    }
    return ch;
}