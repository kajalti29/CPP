#include<iostream>
using namespace std;
int main() {
    int a = 5, b = 10;
    cout << (a == b) << endl;  // 0 (false)
    cout << (a != b) << endl;  // 1 (true)
    cout << (a > b) << endl;   // 0
    cout << (a < b) << endl;   // 1
    cout << (a >= 5) << endl;  // 1
    cout << (b <= 10) << endl; // 1
    return 0;
}
