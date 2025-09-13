// Print the table of 'n' is a integer hich user will input.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;

    cout<<"Multiplication table of: "<<n<<endl;
    for(int i=1; i<=10; i++){
        cout<< n <<"X"<<i<<"="<<n*i<<endl;
    }
}