#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> v = {"apple", "banana", "grape", "blueberry", "orange"};
    char c;
    int count = 0;
    std::cin >> c;

    for(auto& str : v) {
        if(str[2] == c || str[3] == c) {
            std::cout << str << '\n';
            ++count;
        }
    }
    std::cout << count;
    return 0;
}