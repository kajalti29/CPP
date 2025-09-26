// 3️⃣ Find the maximum element in an array
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 5, 20, 8, 15};
    int max = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Maximum: " << max;
    return 0;
}
