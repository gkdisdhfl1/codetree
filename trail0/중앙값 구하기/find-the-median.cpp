#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << (a + b + c) - std::max({a, b, c}) - std::min({a, b, c});
    return 0;
}