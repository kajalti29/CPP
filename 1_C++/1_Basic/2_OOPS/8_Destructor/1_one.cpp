#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called" << endl;
    }

    ~Demo() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    Demo obj;  // Constructor called
    cout << "Inside main" << endl;
    return 0;  // Destructor called automatically
}
