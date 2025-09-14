// WAP to print sum of digits of a given number.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;

    int sum =0;
    while(n!=0){
        int digit = n%10; // extract the last digit
        n = n/10; // remove the last digit from n
        sum = sum + digit; // add the digit to sum
    }
    cout<<"Sum of digits :"<<sum;
return 0;
}