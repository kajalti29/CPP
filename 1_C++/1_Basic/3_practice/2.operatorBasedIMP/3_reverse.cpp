// WaP to print reverce of a given number
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;

    int reverse =0;
    while(n!=0){
        int digit = n%10; // extract the last digit
        n = n/10; // remove the last digit from n
        reverse = reverse * 10 + digit; // add the digit to reverse
    }
    cout<<"Reverse of number :"<<reverse;
return 0;
}