#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of rows: ";
    cin >> n;;

    for(int i = 1; i <=n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j || (i + j) == (n + 1)) // print * on border
                cout << "* ";
            else
                cout << "  "; // print space inside rectangle
        }
        cout << endl;
    }
return 0;
}