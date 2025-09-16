#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;

    // Star Square
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

    // Number Square
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // Number repeate
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // Alphabet square
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<(char)('A'+j-1)<<" ";
        }
        cout<<endl;
    }
return 0;
}