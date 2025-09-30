




// Note:-Ye vector ke size ko change kr deta hai lekin capacity vhi rhti hai




#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};
    v.erase(v.begin() + 2); // index 2 (30) remove

    cout << "After erase: ";
    for(int x : v) cout << x << " ";
}
