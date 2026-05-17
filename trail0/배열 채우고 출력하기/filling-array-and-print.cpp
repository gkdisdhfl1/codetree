#include <iostream>
#include <vector>
using namespace std;

int main() {
    std::vector<char> s(10);
    for(int i = 0; i < 10; ++i) {
        cin >> s[i];
    }

    for(auto it = s.rbegin(); it != s.rend(); ++it) {
        cout << *it;
    }
    return 0;
}