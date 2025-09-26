// Calculate the sum of all the elements in the given array

#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    for(int i = 1; i<5; i++){
    sum += arr[i];
}
    cout<<"sum :"<<sum<<endl;
}