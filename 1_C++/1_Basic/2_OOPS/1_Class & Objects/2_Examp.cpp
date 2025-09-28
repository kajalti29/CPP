// Example of a class.

// class ClassName {
    // Access modifier (public, private, protected)
    // Data Members (variables)
    // Member Functions (methods)
// };

#include<iostream>
using namespace std;

// Class definition
class Car {
public:  // Access specifier

    // Properties (data members)
    string brand;
    int speed;

    // Method (function)
    void showDetails() {
        cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
    }
};

int main() {
    // Object creation
    Car car1;   // ek object
    Car car2;   // dusra object

    // Object ke properties set karna
    car1.brand = "BMW";
    car1.speed = 200;

    car2.brand = "Audi";
    car2.speed = 180;

    // Method call
    car1.showDetails();
    car2.showDetails();

    return 0;
}
