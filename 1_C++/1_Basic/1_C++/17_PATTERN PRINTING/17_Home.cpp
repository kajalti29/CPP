#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows :";
    cin>>n; // Input number of rows

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<i<<" ";
        }
        cout<<endl; // Move to the next line after each row
    }
return 0;
}