#include <iostream>

int main() {
    int n, a, b;
    std::cin >> n;

    for(int i = 0; i < n; ++i) {
        int sum = 0;
        std::cin >> a >> b;
        for(int j = a; j <= b; ++j) {
            if (j % 2 == 0) {
                sum += j;
            }
        }
        std::cout << sum << '\n';
    }
    return 0;
}