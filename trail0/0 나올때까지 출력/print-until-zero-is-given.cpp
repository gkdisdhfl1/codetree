#include <iostream>

int main() {
    int n;
    while (true)
    {
        std::cin >> n;
        if(n == 0)
            break;
        std::cout << n << '\n';
    }
    
    return 0;
}