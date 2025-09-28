#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;

public:
    // Function with local variables same name as data members
    void setData(int roll, string name) {
        // yahan local variable aur data member dono ka naam same hai
        // agar this-> na lagaye to compiler local variable ko hi lega
        this->roll = roll;   // 'this' ensures current object's roll assign ho
        this->name = name;   // 'this' ensures current object's name assign ho
    }

    void display() {
        cout << "Roll No: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s1, s2;

    s1.setData(1, "Kajal");   // this pointer s1 ko point karega
    s2.setData(2, "Aman");    // this pointer s2 ko point karega

    s1.display();  // Roll No: 1, Name: Kajal
    s2.display();  // Roll No: 2, Name: Aman

    return 0;
}
