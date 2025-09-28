// #Defination:-
// Encapsulation is wrapping of data & member function in a single unit called class.


#include<iostream>
using namespace std;

class Student{
    private:
        int roll;
        string name;

    public:
        void setData(int r, string n){
            roll = r;
            name = n;
        }    

        void display(){
            cout << "Roll: " << roll << ", Name: " << name << endl;
        }
};

int main(){
    Student s1;
    s1.setData(1, "kajalti");
    s1.display();
    
return 0;
}