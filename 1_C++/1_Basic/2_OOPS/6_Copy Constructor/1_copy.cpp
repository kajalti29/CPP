// // Copy Constructor
// Special constructor (default) used to copy properties of one object into another.

// #####->Copy constructor ek aisa special constructor hai jo ek object ki values ko dusre object me copy karta hai.
#include <iostream>
#include<string>
using namespace std;

class Student {
private:
    int roll;
    string name;

public:
    // Parameterized Constructor
    Student(int r, string n) {
        roll = r;
        name = n;
    }

    // Copy Constructor
    Student(const Student &obj) {
        roll = obj.roll;
        name = obj.name;
        cout << "Copy Constructor Called" << endl;
    }

    void display() {
        cout << "Roll No: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s1(1, "Kajal");   // Parameterized Constructor call
    Student s2 = s1;          // Copy Constructor call (s1 ki copy banti hai)

    s1.display();  // Roll No: 1, Name: Kajal
    s2.display();  // Roll No: 1, Name: Kajal

    return 0;
}
