#include<iostream>
#include<string>
using namespace std;

int main(){
    string name;
    cout<<"Enter your name :";
    getline(cin, name); //Reads full line including space

    cout<< "Hello, "<< name << "!" <<endl;
    cout<< "Length of name :" << name.length() << endl;
 
return 0;
}