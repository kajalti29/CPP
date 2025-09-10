// Break:- break ek keyword hai jo loop ya switch statement se bahar nikalne ke liye use hota hai. Jab break statement execute hota hai, to control turant loop ya switch se bahar chala jata hai aur uske baad wali statements execute hoti hain.

#include<iostream>
using namespace std;

int main() {
    for(int i=1; i<=10; i++) {
        if(i == 5) {
            break;   
        }
        cout << i << " ";
    }
    return 0;
}
