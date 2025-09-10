#include<iostream>
 using namespace std;

int main(){
    int n;                 // number input ke liye
    long long fact = 1;    // factorial store karne ke liye (large numbers handle kar sake)

    cout<<"Enter a number: ";
    cin>>n;

    for(int i = 1; i <= n; i++){   // 1 se n tak loop
        fact *= i;                 // fact = fact * i
    }

    cout << "Factorial of " << n << " = " << fact << endl;

    return 0;
}




// 1️⃣ Factorial Program in C++
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int factorial = 1;

//     for(int i=1; i<=n; i++){
//         factorial *= i;  // factorial = factorial * i
//     }

//     cout<<"Factorial of "<<n<<" is "<<factorial;
// return 0;
// }