// Find the maximum value out  of all the elements in the array.

#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int max = arr[0];

    for(int i= 1; i<5; i++){
    if(arr[i] > max){
        max = arr[i];
    }
}
cout<<" Maximum : "<< max <<endl;
return 0;
}