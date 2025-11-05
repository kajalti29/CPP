    // Q1. Swap two numbers using variable
#include<iostream>
using namespace std;

int main() {
    int a = 5, b = 10;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "a=" << a << " b=" << b;
    return 0;
}
