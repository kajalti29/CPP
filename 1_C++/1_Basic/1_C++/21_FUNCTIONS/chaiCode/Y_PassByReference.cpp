#include<iostream>
using namespace std;

void addTen(int &x) {  // & ka matlab reference
    x = x + 10;  // original variable badh gaya
}

int main() {
    int a = 5;
    addTen(a);  
    cout << a;  // a ab 15 ho gaya
}
