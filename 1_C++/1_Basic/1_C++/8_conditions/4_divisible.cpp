// take positive integer input and tell if it is divisible by 5 or 3

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"ENter a Number :";
//     cin>> n;
//     if(n % 3 == 0 || n % 5 == 0){
//         cout<<"Number divisible by 3 or 5";
//     }
//     else{
//         "Not divisible by 3 or 5";
//     }
//     return 0;
// }

                                                              // OR EK METHOD HAI
                                                              
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    if(n % 3 == 0 && n % 5 == 0){
        cout << "Number is divisible by both 3 and 5";
    }
    else if(n % 3 == 0){
        cout << "Number is divisible by 3 only";
    }
    else if(n % 5 == 0){
        cout << "Number is divisible by 5 only";
    }
    else{
        cout << "Number is not divisible by 3 or 5";
    }

    return 0;
}
