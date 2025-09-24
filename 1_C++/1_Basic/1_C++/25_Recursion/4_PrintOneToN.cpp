// QUEN:- Print 1 to n (Without Extra parameter)

#include<iostream>
using namespace std;
void print(int n){
    if(n==0)return; //base case
    cout<<n<<endl; //Work
    print(n-1);   //call
    // output:- isme 6 se 1 tak number print hoga
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    print(n);
}