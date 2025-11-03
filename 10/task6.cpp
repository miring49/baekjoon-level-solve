#include <iostream>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    const int K = 60;
    unsigned int a, b, c;
    cin >> a >> b >> c;
    if (a == K and b == K and c == K){
        cout << "Equilateral";
    }
    else if (a + b + c == 3*K and (a == b or b == c or a == c)){
        cout << "Isosceles";
    }
    else if (a + b + c == 3*K and a != b and b != c and c != a){
        cout << "Scalene";
    }
    else if (a + b + c != 3*K){
        cout << "Error";
    }
    return 0;
}