// Take positive integer input and tell if it is a three digit number or not.

// int n > 99 and n < 1000

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    if(n>99 and n<1000){
        cout<<" 3 Digit Number";
    }
    else{
        cout<<"Not a 3 digit Number";
    }
}