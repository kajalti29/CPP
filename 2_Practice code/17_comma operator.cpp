#include<iostream>
using namespace std;
int main() {
    int a, b, c;
    c = (a = 5, b = 10, a + b); // multiple expressions separated by comma
    cout << c << endl; // 15
    return 0;
}
