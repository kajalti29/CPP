// Calculate volume of a Sphere
// v = 4/3 * pi * r*r*r

#include<iostream>
using namespace std;

int main() {
    float pi = 3.145;   // value of pi
    float r = 2;        // radius
    float v = (4.0/3.0) * pi * r * r * r;   // volume formula

    cout << "Volume of Sphere = " << v << endl;

}
