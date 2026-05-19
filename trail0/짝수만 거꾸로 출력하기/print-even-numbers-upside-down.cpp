#include <iostream>
#include <vector>

int main() {
    int n;
    std::vector<int> v;
    std::cin >> n;

    for(int i = 0; i < n; ++i) {
        int a;
        std::cin >> a;

        if(a % 2 == 0) {
            v.push_back(a);
        }
    }

    for(auto it = v.rbegin(); it != v.rend(); ++it) {
        std::cout << *it << ' ';
    }
    return 0;
}