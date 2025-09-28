// Public and private 

#include<iostream>
using namespace std;

class Student{

    private:
        int roll;

    public:
        string name;

    void setRoll(int r){
        roll = r;
    }

    void display(){
        cout<< "Roll : "<<roll<<", Name :"<<name<<endl;
    }
};

int main(){
    Student s1;
    s1.name = "Amit";

    s1.setRoll(5);
    s1.display(); 
return 0;
}