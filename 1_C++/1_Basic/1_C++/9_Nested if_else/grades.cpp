// Take input percentage of a student and print the grade according to marks.

// 81-100 very good
// 61-80 good
// 41-60 Average
// <= 40 Fail

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter marks :";
    cin>>n;

    if(n>81 and n<100){
        cout<<"very good";
    }

    else if(n>61 and n<80){
        cout<<"good";
    }

     else if(n>41 and n<60){
        cout<<"Average";
    }
    else{
        cout<<"Fail";
    }

   
    return 0;
}