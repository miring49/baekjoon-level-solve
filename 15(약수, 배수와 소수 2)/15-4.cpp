#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int Euclidean(int x, int y)
{
    int r = x % y;
    if (r == 0) {
      return y;
    }
    return Euclidean(y, r);
}

int main() {
    fastio;
    int n; cin >> n;
    int gcd, count = 0;
    vector<int> v_tree(n);
    for (int i = 0; i < n; i++){
        cin >> v_tree[i];
    }

    sort(v_tree.begin(), v_tree.end());
    vector<int> v_dis(n-1);

    for (int i = 1; i < n; i++){
        v_dis[i-1] = v_tree[i] - v_tree[i-1];
    }

    gcd = v_dis[0];
    for (int i = 1; i < n-1; i++){
        gcd = Euclidean(gcd, v_dis[i]);
    }

    for (int i = 1; i < n; i++) {
        count += (v_dis[i - 1] / gcd) - 1;
    }
    cout << count;
    return 0;
}