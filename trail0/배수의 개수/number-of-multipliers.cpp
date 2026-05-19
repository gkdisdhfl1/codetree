#include <iostream>
#include <vector>

int main() {
    std::vector<int> v(10);
    int count3 = 0, count5 = 0; 
    for(int i = 0; i < 10; ++i) {
        std::cin >> v[i];
        if(v[i] % 3 == 0)
            ++count3;
        if(v[i] % 5 == 0)
            ++count5;
    }

    std::cout << count3 << ' ' << count5;
    return 0;
}