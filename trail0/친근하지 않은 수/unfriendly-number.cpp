#include <iostream>
#include <vector>

int main() {
    int n;
    int count = 0;
    std::cin >> n;

    for(int i = 1; i <= n; ++i) {
        if(i % 2 == 0 || i % 3 == 0 || i % 5 == 0)
            continue;
        ++count;
    }

    std::cout << count;
    return 0;
}