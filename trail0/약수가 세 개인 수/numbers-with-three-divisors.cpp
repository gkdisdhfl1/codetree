#include <iostream>

int main() {
    int start, end;
    int num_count = 0;

    std::cin >> start >> end;
    for(int i = start; i <= end; ++i) {
        int divisor_count = 0;
        for(int j = 1; j <= i; ++j) {
            if(i % j == 0)
                ++divisor_count;
        }

        if(divisor_count == 3)
            ++num_count;
    }

    std::cout << num_count;
    return 0;
}