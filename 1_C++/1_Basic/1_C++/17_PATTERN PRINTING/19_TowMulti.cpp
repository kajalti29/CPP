
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        int a = 1;   // semicolon add kiya
        for(int j = 1; j <= i; j++) {
            cout << a << " ";
            a += 2;
        }
        cout << endl;
    }

    return 0;
}
