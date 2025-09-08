// Take 3 positive integers input and print the least of them

#include<iostream>
using namespace std;
int main(){
    int a, b, c;
        cout<<"Enter first number :";
        cin>>a;
        cout<<"Enter second number :";
        cin>>b;
        cout<<"Enter third number :";
        cin>>c;
        if(a<b and a<c){
            cout<<a <<" is least";
        }
        else if(b<a and b<c){
            cout<<b<<" is least";
        }
        else{
            cout<<c<<" is least";
        }
    }                     
