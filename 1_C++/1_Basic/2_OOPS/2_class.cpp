// Class:-
// Class एक blueprint है।
// इसमें properties (data members) और functions (methods) define होते हैं।

#include<iostream>
#include<string>
using namespace std;

class Teacher{
    public:
    //properties
    string name;
    string dept;
    string subject;
    double salary;

    //methods
    void change(string newDept){
        dept = newDept;
    }
};
int main(){
    Teacher t1; // obj
    t1.name = "kajalti";
    t1.subject = "c++";
    t1.dept = "computer science";
    t1.salary = 25000;

    cout << "Name: " << t1.name << endl;
    cout << "Department: " << t1.dept << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Salary: " << t1.salary << endl;  
return 0;
}