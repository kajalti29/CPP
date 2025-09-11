#include<iostream>
using namespace std;

int main(){
    for(int i=1; i<=100; i++){
        if(i==5){
            continue; // skip the iteration when i is 5
        }
        cout<<i<<" ";
    }
return 0;
}