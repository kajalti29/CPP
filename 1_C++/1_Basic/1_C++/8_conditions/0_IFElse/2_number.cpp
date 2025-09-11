// 👉 अगर condition true है → पहला block चलेगा,
// 👉 अगर condition false है → दूसरा block चलेगा।


#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number :";
    cin>> number;

    if( number % 2 == 0){
        cout<<"Even Number"<<endl;
    }else{
        cout<<"odd Number"<<endl;
    }

    return 0;
}