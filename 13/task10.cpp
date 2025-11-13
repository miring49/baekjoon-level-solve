#include <iostream>
#include <algorithm>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

class person { // 좌표 구조체
public:
    int age;
    string name;
};

bool comp (person a, person b){
    return a.age < b.age;
}

person* p = new person[100000];

int main() {
    fastio;
    unsigned int n; cin >> n;
    for (int i = 0; i < n; i++){
        cin >> p[i].age >> p[i].name;
    }
    stable_sort(p,p + n, comp); // 안정 정렬
    for (int i = 0; i < n; i++){
        cout << p[i].age << " " << p[i].name << "\n";
    }
    return 0;
}