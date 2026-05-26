#include <iostream>

int main() {
    int n;
    while(true) {
        std::cin >> n;
        if(n < 25)
            std::cout << "Higher" << '\n';
        else if(n > 25) {
            std::cout << "Lower" << '\n';
        } else {
            std::cout << "Good" << '\n';
            break;
        }
    }
    
    return 0;
}