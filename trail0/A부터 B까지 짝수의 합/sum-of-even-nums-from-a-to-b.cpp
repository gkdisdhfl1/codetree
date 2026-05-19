#include <iostream>

int main() {
    int a, b;
    int sum = 0;
    std::cin >> a >> b;

    for(int i = a; i <= b; ++i) {
        if(i % 2 == 0)
            sum += i;
    }

    std::cout << sum;
    return 0;
}