// Print the table of 'n' is a integer hich user will input.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENter the number :";
    cin>>n;

    cout<<"The table of "<<n<<" is :"<<endl;
    for(int i = 1; i<=10; i++){
        cout<< n << " X "<< i << "=" << n * i<<endl;
    }
    return 0;
}