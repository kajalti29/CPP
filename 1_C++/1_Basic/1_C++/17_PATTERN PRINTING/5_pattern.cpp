
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    for(int i=1; i<=n; i++){   //rows
        for(int j=1; j<=n; j++){  //columns
            cout<<(char)(j+64)<<" " ;
        }
        cout<<endl;
    }
    return 0;
}