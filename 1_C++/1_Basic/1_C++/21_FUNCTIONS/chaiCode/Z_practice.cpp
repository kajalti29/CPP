#include<iostream>
using namespace std;

void addvalue(int x){
    x = x + 10;
}

void addReference(int &y){
    y = y + 10;

}

int main(){
    int a = 5; // X ki copy a ban gyi (x = a) 
    int b = 5;  // y ki copy b ban gyi (y = b)
    addvalue(a);
    addReference(b);
    cout<<"Pass by value : a = "<<a<<endl;
    cout<<"Pass by reference : b = "<<b<<endl;

}


// 3️⃣ Can you swap two numbers using function?
// Haan, pass by reference se swap ho sakta hai.

// void swap(int &a, int &b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

