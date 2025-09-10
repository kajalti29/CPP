// 👉 Palindrome wo number hota hai jo ulta karne par bhi same rahe
// (jaise 121, 1331, 12321).



#include <iostream>
using namespace std;

int main() {
    int n, rev = 0, rem, orig;

    cout << "Enter a number: ";
    cin >> n;

    orig = n;  // original number save kar lo

    while (n > 0) {
        rem = n % 10;          // last digit
        rev = rev * 10 + rem;  // reverse number banate jao
        n = n / 10;            // last digit hata do
    }

    if (orig == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
