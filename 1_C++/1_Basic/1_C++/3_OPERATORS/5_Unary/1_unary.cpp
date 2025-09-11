#include <iostream>
using namespace std;

int main() {
    int a = 5;
    cout << ++a << endl; // 6 (pre-increment)
    cout << a++ << endl; // 6 (then a=7)
    cout << --a << endl; // 6
    cout << a-- << endl; // 6 (then a=5)
    return 0;
}
