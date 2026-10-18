#include <iostream>
#include <string>
#include <stack>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    string s; cin >> s;
    stack<int> st;
    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) {
            // string to int
            st.push(s[i] - '0');
        } else {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            switch (s[i]) {
                case '+':
                    st.push(a + b);
                    break;
                case '-':
                    st.push(a - b);
                    break;
                case '*':
                    st.push(a * b);
                    break;
                case '/':
                    st.push(a / b);
                    break;
                default:
                    break;
            }
        }
    }
    cout << st.top() << "\n";
    return 0;
}
