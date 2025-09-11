#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 3;

    cout << (a > 3 && b < 5) << endl; // 1 (true)
    cout << (a > 6 || b < 5) << endl; // 1 (true)
    cout << !(a > 3) << endl;         // 0 (false)

    return 0;
}
