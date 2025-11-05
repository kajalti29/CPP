#include<iostream>
using namespace std;
void func() {
    static int count = 0;
    count++;
    cout << count << endl;
}

int main() {
    func(); // 1
    func(); // 2
    func(); // 3
}
