#include <iostream>

int main() {
    int a, b, n;
    std::cin >> a >> b;
    
    n = a;
    while (n <= b) {
        std::cout << n << ' ';
        n % 2 == 0 ? n += 3 : n *= 2;
    }
    
    return 0;
}