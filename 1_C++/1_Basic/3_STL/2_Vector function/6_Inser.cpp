#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};
    v.insert(v.begin() + 1, 15); // index 1 पर 15 insert

    cout << "After insert: ";
    for(int x : v) cout << x << " ";
}
