#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    std::vector<int> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    for(auto num : v) {
        cout << num * num << ' ';
    }
    return 0;
}