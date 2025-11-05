#include<iostream>
using namespace std;
int main() {
    int a = 10;
    a += 5;   // a = a + 5
    cout << a << endl; // 15
    a -= 3;   // a = a - 3
    cout << a << endl; // 12
    a *= 2;   // a = a * 2
    cout << a << endl; // 24
    a /= 4;   // a = a / 4
    cout << a << endl; // 6
    a %= 4;   // a = a % 4
    cout << a << endl; // 2
    return 0;
}
