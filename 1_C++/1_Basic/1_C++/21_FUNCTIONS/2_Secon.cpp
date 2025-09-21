#include<iostream>
using namespace std;

void usa(){
    cout<<"Hello, USA"<<endl;
}
void india(){
    cout<<"Hello, India"<<endl;
}
int main(){
    cout<<"You are in main"<<endl;

    india();  // Function call
    usa();    // Function call
    
return 0;
}