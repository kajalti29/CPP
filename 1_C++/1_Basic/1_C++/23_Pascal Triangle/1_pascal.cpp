#include<iostream>
using namespace std;
int ncr(int n, int r ){ 

}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << ncr(i, j) << " ";
        }
        cout << endl; // Move to next row
    }

    return 0;
}
