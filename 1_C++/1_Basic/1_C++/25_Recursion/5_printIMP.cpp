#include<iostream>
using namespace std;
void print(int n){
    if(n==0)return; //base case
    print(n-1);   //call
    cout<<n<<endl; //Work

}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    print(n);
}

// output:- isme 1 se 7 tak print hoga 