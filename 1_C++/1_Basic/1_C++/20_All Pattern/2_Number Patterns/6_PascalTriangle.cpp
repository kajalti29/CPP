#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        // print leading spaces for alignment
        for(int s = 0; s < n-i-1; s++) cout << " ";

        int val = 1; // first value in each row is always 1
        for(int j = 0; j <= i; j++){
            cout << val << " ";
            val = val * (i - j) / (j + 1); // formula to get next value
        }
        cout << endl;
    }

    return 0;
}
