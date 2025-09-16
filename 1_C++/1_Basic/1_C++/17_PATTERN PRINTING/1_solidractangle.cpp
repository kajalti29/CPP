// Print the given pattern


#include<iostream>
using namespace std;

int main(){
    int m;
    cout << "Enter the number of rows: ";
    cin >> m;

    int n;
    cout << "Enter the number of columns: ";
    cin >> n;

    // Outer loop controls rows
    for(int i = 1; i <= m; i++){
        // Inner loop controls columns
        for(int j = 1; j <= n; j++){
            cout << "* ";
        }
        cout << endl;  // go to next line after each row
    }

    return 0;
}
