#include<iostream>
using namespace std;
int main() {
    int a = 5, b = 3; // 5=0101, 3=0011
    cout << (a & b) << endl;   // 1 (0101 & 0011 = 0001)
    cout << (a | b) << endl;   // 7 (0101 | 0011 = 0111)
    cout << (a ^ b) << endl;   // 6 (0101 ^ 0011 = 0110)
    cout << (~a) << endl;      // -6
    cout << (a << 1) << endl;  // 10 (0101 << 1 = 1010)
    cout << (a >> 1) << endl;  // 2 (0101 >> 1 = 0010)
    return 0;
}
