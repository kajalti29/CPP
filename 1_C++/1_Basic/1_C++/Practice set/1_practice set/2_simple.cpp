// Calculating simple interest
// #include<iostream>
// using namespace std;
// int main(){
//     float p = 1000;
//     float r = 30;
//     float t = 3;
//     float si = (p*r*t)/100;
//     cout<<si;
// }

//simple interest user se value lena
#include<iostream>
using namespace std;

int main() {
    float P, R, T, SI;

    cout << "Enter Principal: ";
    cin >> P;

    cout << "Enter Rate of Interest: ";
    cin >> R;

    cout << "Enter Time (in years): ";
    cin >> T;

    // Formula
    SI = (P * R * T) / 100;

    cout << "Simple Interest = " << SI << endl;

    return 0;
}


