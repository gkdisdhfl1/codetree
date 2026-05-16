#include <iostream>
using namespace std;

int main() {
    int y;
    bool result = false;
    cin >> y;
    

    if(y % 4 == 0 && !(y % 100 == 0 && y % 400 != 0))
        result = true;

    cout << (result ? "true" : "false");
    return 0;
}