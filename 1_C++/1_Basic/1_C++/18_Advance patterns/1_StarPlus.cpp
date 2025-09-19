#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    int mid = n / 2 + 1; // middle row and column

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == mid || j == mid)   // print * in middle row or column
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}
