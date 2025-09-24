// Sum of 1 to n
#include<iostream>
using namespace std;

int sum1ToN(int n){
    if(n == 0) return 0;
    return n + sum1ToN(n - 1);
}

int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;

    cout<<"Sum from 1 to "<< n << " is:"<<sum1ToN(n);
    
return 0;
}