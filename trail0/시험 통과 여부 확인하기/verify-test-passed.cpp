#include <iostream>
using namespace std;

int main() {
    int score;
    cin >> score;

    if(score >= 80) {
        cout << "pass";
    } else {
        int diff = 80 - score;
        cout << diff << " more score";
    }
    return 0;
}