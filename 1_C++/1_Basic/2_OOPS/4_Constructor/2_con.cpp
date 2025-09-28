#include <iostream>
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

    void display() {
        cout << "Roll No: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    // Jab object banate hain to constructor automatic call hota hai
    Student s1(1, "Kajal");
    Student s2(2, "Aman");

    s1.display(); // Output: Roll No: 1, Name: Kajal
    s2.display(); // Output: Roll No: 2, Name: Aman

    return 0;
}
