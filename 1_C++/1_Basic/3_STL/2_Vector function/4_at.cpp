#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {10, 20};

cout << v[1];    // 20
cout << v.at(1); // 20

// cout << v[5];    // undefined
// cout << v.at(5); // throws exception

return 0;
}