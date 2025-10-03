#include <iostream>
using namespace std;

int main() {
    int n;
    long long fact = 1;
    cin >> n; // User input
    for(int i = 1; i <= n; i++) {
        fact *= i; // Multiply current number
    }
    cout << "Factorial of " << n << " is " << fact;
    return 0;
}
