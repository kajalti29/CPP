// what and why ?

// FUNCTIONS:-A FUnction is a block of code that performs a specific task.
//             It helps in code reusability, better organization, and modularity.


// Why Functions are used?

// Reusability – Write once, use many times.

// Readability – Code becomes cleaner and easier to understand.

// Debugging – Errors are easier to find and fix.

// Modularity – Program is divided into smaller parts (functions).


// Basic syntax of a function in C++:

//                fun(){
                      // function body
//                 }
// ...............................................................................................................................


#include<iostream>
using namespace std;
void greet(){
    cout<<"Hello, Good Morning"<<endl;
}

int main(){
    cout<<"This is our first function in C++"<<endl;
    cout<<"Good morning"<<endl;     
    cout<<"Have a nice day"<<endl;  
    greet();  // Function call
    cout<<"Thank you"<<endl;

return 0;
}



