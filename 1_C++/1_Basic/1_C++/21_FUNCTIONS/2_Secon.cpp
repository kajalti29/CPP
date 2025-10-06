#include <iostream>
using namespace std;

int add(int a, int b){   // function definition
    return a + b;
}

int main(){
    int x = 5, y = 3;
    cout << "Sum = " << add(x, y);  // function call
    return 0;
}

