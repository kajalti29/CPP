// #include <iostream>
// using namespace std;

// int main() {
//     int a = 10, b = 20;
//     int max = (a > b) ? a : b; // ternary operator
//     cout << "The largest number is: " << max << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n = 7;
    string result = (n % 2 == 0) ? "Even" : "Odd";
    cout << n << " is " << result << endl;
    return 0;
}
