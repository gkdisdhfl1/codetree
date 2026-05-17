#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a, b;
    std::vector<int> v(10);
    cin >> a >> b;
    v[0] = a; v[1] = b;
    for(int i = 2; i < 10; ++i) {
        int n = v[i - 2] + v[i - 1];
        if(n >= 10)
            n -= 10;
        v[i] = n;
    }

    for(int n : v) {
        cout << n << ' ';
    }
    return 0;
}