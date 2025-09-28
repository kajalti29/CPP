#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;

public:
    void setData(int roll, string name) {
        this->roll = roll;   // 'this' current object ke roll ko refer karega
        this->name = name;   // 'this' current object ke name ko refer karega
    }

    void display() {
        cout << roll << " - " << name << endl;
    }
};

int main() {
    Student s1, s2;
    s1.setData(1, "Kajal");
    s2.setData(2, "Aman");

    s1.display();  // 1 - Kajal
    s2.display();  // 2 - Aman
}
