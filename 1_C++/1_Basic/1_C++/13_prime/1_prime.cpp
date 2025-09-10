// Prime number ka matlab hai aise natural number jo sirf 1 aur apne aap se divide ho sake (jaise 2, 3, 5, 7, 11 …).



#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    bool isPrime = true;

    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }

    if(isPrime)
        cout<<n<<" is a prime number.";
    else
        cout<<n<<" is not a prime number.";
return 0;
}