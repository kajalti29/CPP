// 1️⃣ Print first N natural numbers#include <iostream>
#include<iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    for(int i = 1; i <= N; i++) {
        cout << i << " ";
    }

    return 0;
}
