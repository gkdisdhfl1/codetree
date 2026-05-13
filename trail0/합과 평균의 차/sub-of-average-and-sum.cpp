#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int sum = a + b + c;
    int avg = sum / 3;
    int result = sum - avg;
    cout << sum << '\n' << avg << '\n' << result;
    return 0;
}