
//Desctructor:_ ye ek special member function hai jo object ka scope hone pr automatically callhota hai.
//              iska kam hota hai dynamic memory, resources, file handles aadi ko clean karta hai.

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
