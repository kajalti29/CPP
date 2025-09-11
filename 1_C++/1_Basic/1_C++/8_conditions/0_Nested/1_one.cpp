#include <iostream>
using namespace std;

int main() {
    int age;
    bool hasID;

    cout << "Enter age: ";
    cin >> age;

    cout << "Do you have ID card? (1 = Yes, 0 = No): ";
    cin >> hasID;

    if (age >= 18) {
        if (hasID) {
            cout << "You can enter.";
        } else {
            cout << "ID card required.";
        }
    } else {
        cout << "You are underage.";
    }

    return 0;
}
