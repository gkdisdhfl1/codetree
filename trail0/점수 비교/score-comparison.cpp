#include <iostream>
using namespace std;

struct Subject {
    int math;
    int english;
};

int main() {
    Subject a, b;

    cin >> a.math >> a.english;
    cin >> b.math >> b.english;

    cout << (a.math > b.math && a.english > b.english) ? 1 : 0;
    return 0;
}