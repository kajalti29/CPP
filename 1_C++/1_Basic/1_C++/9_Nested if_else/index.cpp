// Take 3 positive iintegers input and output the greatest of them.


// Take 3 positive integers input and output the greatest of them.

#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter first Number : ";
    cin >> a;
    cout << "Enter second Number : ";
    cin >> b;
    cout << "Enter third Number : ";
    cin >> c;

    if(a > b){
        if(a > c){
            cout << a << " is greatest" << endl;
        }else{
            cout << c << " is greatest" << endl;
        }
    }else{
        if(b > c){
            cout << b << " is greatest" << endl;
        }else{
            cout << c << " is greatest" << endl;
        }
    }
    return 0;
}


















