#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    // Upper half of diamond
    for(int i=1; i<=n; i++){
        // print spaces
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        // print stars
        for(int k=1; k<=2*i-1; k++){
            cout<<"*";
        }
        cout<<endl;  // end of row
    }

    // Lower half of diamond
    for(int i=n-1; i>=1; i--){
        // print spaces
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        // print stars
        for(int k=1; k<=2*i-1; k++){
            cout<<"*";
        }
        cout<<endl; // end of row
    }

    return 0;
}
