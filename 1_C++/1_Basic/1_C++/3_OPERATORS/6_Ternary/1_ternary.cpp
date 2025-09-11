#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    string result = (n % 2 == 0) ? "Even" : "Odd";
    cout << "Number is " << result;
    return 0;
}
