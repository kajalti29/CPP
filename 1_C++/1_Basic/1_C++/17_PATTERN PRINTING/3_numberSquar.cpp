#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the side of squar : ";
    cin>>n;

    for(int i=1;i<=n;i++){         // rows
        for(int j=1;j<=n;j++){     // columns
            cout<<j<<" ";
        }
        cout<<endl;   // yaha line break dena hai
    }
    return 0;   

}