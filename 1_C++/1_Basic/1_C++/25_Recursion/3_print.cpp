// Print n to 1

#include<iostream>
using namespace std;

void print(int n){
    cout<<n<<endl;
    print(n+1);
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    print(1);
}