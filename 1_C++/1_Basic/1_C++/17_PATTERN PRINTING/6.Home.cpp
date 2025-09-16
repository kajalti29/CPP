#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    for(int i = 1; i <= n; i++){         // rows
        for(int j = 1; j <= n; j++){     // columns
            cout << (char)('A' + i -1)<< " ";
        }
        cout << endl;   // yaha line break dena hai
    }
    return 0;
}