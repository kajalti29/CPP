// pass by value:- Jab function me hum variable ki copy bhejte hain.
// Function ke andar jo change hota hai, wo original variable me nahi hota.
// Matlab function ke andar naya box ban jata hai value ke liye.


// Ek chhota trick yaad rakhne ke liye
// Pass by Value = Copy bheja → Original safe
// Pass by Reference = Address bheja → Original change


#include<iostream>
using namespace std;

void addTen(int x) {
    x = x + 10;  // sirf copy badh rahi hai
}

int main() {
    int a = 5;
    addTen(a);  
    cout << a;  // a abhi bhi 5 hi hai
}
