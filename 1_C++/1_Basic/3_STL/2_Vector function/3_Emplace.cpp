#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main() {
    vector<pair<int,string>> vp;

    vp.push_back({1, "Hello"});   // pair create करके फिर copy
    vp.emplace_back(2, "World");  // direct construct (faster)

    for(auto &p : vp)
        cout << p.first << " " << p.second << endl;
}
