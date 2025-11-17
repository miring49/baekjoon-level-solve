#include <iostream>
#include <algorithm>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

class coo { // 좌표 구조체
public:
    int x;
    int y;
};

bool comp(coo a, coo b) { // 정렬함수에 사용할 비교 함수
    if (a.y == b.y){
        return a.x < b.x;
    }
    else{
        return a.y < b.y;
    }
}

coo* c = new coo[100000];

int main() {
    fastio;
    unsigned int n; cin >> n;
    for (int i = 0; i < n; i++){
        cin >> c[i].x >> c[i].y;
    }
    stable_sort(c,c + n, comp); // 안정 정렬
    for (int i = 0; i < n; i++){
        cout << c[i].x << " " << c[i].y << "\n";
    }
    return 0;
}