#include<iostream>
using namespace std;

int main(){
    int arr[5] = {4, 1, 3, 7, 3};
    arr[0] = 0;
    //output
    for(int i = 0; i<=4; i++){
        cout<<arr[i]<<" ";
    }
}