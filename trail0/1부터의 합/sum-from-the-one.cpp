#include <iostream>
#include <vector>

int main() {
    int n;
    int sum = 0;
    std::cin >> n;

    for(int i = 1; i <= 100; ++i) {
        sum += i;
        if(sum >= n) {
            std::cout << i;
            break;
        }
    }
    return 0;
}