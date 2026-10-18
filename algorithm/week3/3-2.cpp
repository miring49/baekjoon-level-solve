#include <iostream>
#include <algorithm>
#include <string>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

template <class BidirIt>
string desc(string k) {
    // reverse(k.begin(), k.end());
    BidirIt first = k.begin();
    BidirIt last = k.end();
    while ((first != last) && (first != --last)) {
        iter_swap(first++, last);
    }
    return k;
}

int main() {
    fastio;
    string s; cin >> s;
    string k = desc<string::iterator>(s);
    cout << k;
    return 0;
}
