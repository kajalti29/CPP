#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<string, int> m;

    // Insert elements
    m.insert({"tv", 100});
    m.insert({"laptop", 100});
    m.insert({"headphones", 50});
    m.insert({"tablet", 120});
    m.insert({"watch", 50});
    m.emplace("camera", 25);

    // Print all elements
    cout << "Multimap elements:\n";
    for(auto p : m){
        cout << p.first << " " << p.second << endl;
    }

    // Count number of keys "laptop"
    cout << "Count of 'laptop' = " << m.count("laptop") << endl;

    return 0;
}
