#include <iostream>
#include <deque>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    int n; cin >> n;
    deque<int> dq;
    vector<int> trash;
    for (int i = 1; i <= n; i++) {
        dq.push_back(i);
    }
    while (dq.size() != 1) {
        trash.push_back(dq.front());
        dq.pop_front();
        dq.push_back(dq.front());
        dq.pop_front();
    }
    for (int i = 0; i < trash.size(); i++) {
        cout << trash[i] << " ";
    }
    cout << dq.front() << "\n";
    return 0;
}

