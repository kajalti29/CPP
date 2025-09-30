#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};
    v.clear(); // सभी elements remove

    cout << "size = " << v.size();
    cout << "size = " << v.capacity();

}
