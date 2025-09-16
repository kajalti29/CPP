#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows :";
    cin>>n; // Input number of rows
    char ch;
    for(int i=1; i<=n; i++){
        ch = 'A' + n - i; // Initialize character for each row
        for(int j=1; j<=n-i+1; j++){
            cout<<ch<<" "; // Print character
            ch++; // Move to the next character
        }
        cout<<endl; // Move to the next line after each row
    }
}