// Typecasting:- Typecasting ka mtlb hota hai kisi ek data type ki value ko dusre data type me convert karna.

// उदाहरण: integer को float में, character को integer में, float को int में इत्यादि।

// Types of Typecasting:-

// 1. Implicit Typecasting (Type Conversion / Type Promotion)

// compiler automatic conversion karta hai.

// #include<iostream>
// using namespace std;
// int main(){
//     int x = 10;
//     float y = x;   // int से float में automatic conversion
//     cout << "x = " << x << endl;
//     cout << "y = " << y << endl;
//     return 0;
// }

// 2. Explicit Typecasting (Type Casting by User)

#include<iostream>
using namespace std;
int main(){
    float pi = 3.14159;
    int x = (int)pi;    // float से int में convert किया
    cout << "pi = " << pi << endl;
    cout << "x = " << x << endl;
    return 0;
}



















