// Display this GP = 3, 12, 48,...upto 'n'terms

// Geometric progesstion
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
        int a =3;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a*=4;// a=a*4

    }
}