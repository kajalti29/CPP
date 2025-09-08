// Take positive integer input and tell if it is dividible by 5 or 3 but not divisible by 15

// int :- if(n%5==0 or n%3==0) and (n%15!=0)


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if ((n % 5 == 0 || n % 3 == 0) && (n % 15 != 0)) {
        cout << n << " is divisible by 5 or 3 but not divisible by 15" << endl;
    } else {
        cout << n << " does not satisfy the condition" << endl;
    }

    return 0;
}


















