#include<iostream>
using namespace std;

int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int min =  arr[0];

    for(int i=1; i<5; i++)
    if(arr[i] <min)
    min = arr[i];

    cout<<" Minmum: "<<min;

return 0;
}