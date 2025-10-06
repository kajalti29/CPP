#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"ENter the number :";
    cin>>n;

    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n-i; s++) cout << " "; // spaces
        for (int j = 1; j <= i; j++) cout << "*";   // stars
        cout << endl;
    }
    return 0;
}
