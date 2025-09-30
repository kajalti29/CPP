// push_back(x) → element को last में insert करता है।

// pop_back() → last element remove करता है।

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    v.pop_back();

    cout << "+Vector elements:"<<v.size() <<endl;

     cout << "Vector elements: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;

    
return 0;
}