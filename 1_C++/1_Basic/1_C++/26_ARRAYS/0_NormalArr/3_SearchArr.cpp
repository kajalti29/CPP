// 5️⃣ Search for an element (Linear Search)
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key = 30;
    bool found = false;

    for(int i = 0; i < 5; i++) {
        if(arr[i] == key) {
            found = true;
            cout << "Element found at index " << i;
            break;
        }
    }

    if(!found)
        cout << "Element not found";
    
    return 0;
}
