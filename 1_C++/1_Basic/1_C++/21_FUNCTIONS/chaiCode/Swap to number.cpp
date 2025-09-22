#include<iostream>
using namespace std;

int main(){
    int a = 2;
    int b = 3;
    cout<<a<<" "<<b<<endl;  // Step 1: Print original values

    a = b;  // Step 2: a me b ki value aa gayi (a = 3)
    b = a;  // Step 3: b me a ki value aa gayi (b = 3)

    cout<<a<<" "<<b<<endl;  // Step 4: Print values after "swap"
    return 0;
}
