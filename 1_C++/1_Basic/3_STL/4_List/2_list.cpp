#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {10, 20, 30};

    // Add elements
    l.push_back(40);
    l.push_front(5);

    cout << "List elements: ";
    for(int x : l)
        cout << x << " ";
    cout << endl;

    // Remove elements
    l.pop_back();
    l.pop_front();

    cout << "After pop operations: ";
    for(int x : l)
        cout << x << " ";
    cout << endl;

    // Size and empty
    cout << "Size = " << l.size() << ", Empty? " << (l.empty() ? "Yes" : "No") << endl;

    return 0;
}
