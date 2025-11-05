#include<iostream>
using namespace std;
int main() {
    int a = 5;
    cout << ++a << endl; // Prefix increment: 6
    cout << a++ << endl; // Postfix increment: 6 (then a becomes 7)
    cout << --a << endl; // Prefix decrement: 6
    cout << a-- << endl; // Postfix decrement: 6 (then a becomes 5)
    return 0;
}
