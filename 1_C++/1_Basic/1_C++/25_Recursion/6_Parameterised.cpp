// QUEN:- Print sum from 1 to n (Parameterised)
#include<iostream>
using namespace std;

int sum(int n){
    if(n == 0)
    return 0;
    return n + sum(n-1);
    }
    int main(){
        int n;
        cout<<"Enter n :";
        cin >> n;

        int result = sum(n);
        cout<<"Sum from 1 to " << n << "is :"<<result;

        return 0;
    }

