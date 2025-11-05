#include<iostream>
using namespace std;
int main(){
    bool x = true;
    bool y = false;
    cout<< (x && y) << endl; // false(0)
    cout<< (x || y) << endl; // true(1)
    cout<< (!x) << endl;      // false(1)
    return 0;

}