#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of ros : ";
    cin>>n;

    int a = 1; // yaha pe semicolon add kiya
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
return 0;
}