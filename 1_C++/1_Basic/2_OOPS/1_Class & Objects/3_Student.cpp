// Class and Objects.

#include<iostream>
using namespace std;

class Student{
    public:
    int roll;
    string name;

    void display(){
        cout<<roll<< "_"<<name<<endl;
    }
};
int main(){
    Student s1;
    s1.roll = 1;
    s1.name = "kajalti";
    s1.display();
       
return 0;
}