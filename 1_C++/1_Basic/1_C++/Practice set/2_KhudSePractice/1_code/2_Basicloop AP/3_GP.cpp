// disply this GP - 1,2,4,8,16,32,...upto 'n'terms


//Number se multiply mtlb GP
#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter n :";
    cin>>n;
        int a =1;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a *=2;// a=a*2
    }
}