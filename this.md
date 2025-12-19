C++ Complete Notes

<!-- What is C++ ? -->
C++ is a general-purpose, object-oriented, compiled programming language developed by Bjarne Stroustrup. 
It is widely used for system software, competitive programming, game development, and applications requiring high performance.

<!-- Why used in C++ -->
* C++ is fast and efficient
* Supports OOP + procedural programming
* Rich library(STL)
* Fast Execution and portable

-------------------------------------------------------------------------------------------------------------------------------

2. Basic Structure of C++ Program:-
<!-- 
#include<iostream>
using namespace std;

int main(){
    cout << "Hello Word";
    return 0;
}
 -->


#include is a preprocessor directive
main() function se program execution start hota hai.
iostream for input/output
return 0 means successful execution

---------------------------------------------------------------------------------------------------------------------------
<!-- 3. Data Types:_ -->
Hindi: Data type batata hai ki variable kis type ka data store karega.


Primitive Data Types
Type	   Size	      Example
int	       4 bytes	   10
float	   4 bytes	   3.14
double	   8 bytes	   10.55
char	   1 byte	   'A'
bool	   1 byte	   true/false

---------------------------------------------------------------------------------------------------------------------------

<!-- 4. Variables & Constants -->
English: Variable stores data; constant value change nahi hoti.

#include<iostream>
using namespace std;

int main(){
    int a = 10;
    const float pi = 3.14;

        return 0;
  
}

<!-- 1️⃣ What is a variable? -->
A variable is a named memory location used to store data that can change during program execution.

<!-- 2️⃣ Why do we use variables? -->
Variable help To store, update and reuse data in a program.

<!-- 3️⃣ What is variable declaration? -->
Declaring a variable means defining its data type and name.

<!-- 3️⃣ Difference between variable and constant? -->
| Variable                  | Constant               |
| ------------------------- | ---------------------- |
| Value change ho sakti hai | Value change nahi hoti |
| `int a = 10;`             | `const int a = 10;`    |

<!-- 4️⃣ What are types of variables (scope based)? -->
Local variable
Global variable
Block variable

1️⃣ Local Variable:- A variable declared inside a function is called a local variable.
It can be used only inside that function.
<!-- 
#include<iostream>
using namespace std;

void geet(){
    int a = 10;
    cout << a;
}

int main(){
    geet();
    //cout << a;   ❌ Error
}

 -->
 Local variable: Function ke andar ka variable


2️⃣ Global Variable :- 
A variable declared outside all functions is called a global variable.
It can be accessed anywhere in the program.

<!-- 
#include<iostream>
using namespace std;

int g = 50;  // global variable

void show(){
    cout << g;
}

int main(){
    cout << g;
    show();
} -->

Global variable: Poore program me accessible variable


3️⃣ Block Variable:-
A variable declared inside a block { } (like if, loop) is called a block variable.
It is accessible only inside that block.

<!-- 
#include <iostream>
using namespace std;

int main() {
    if (true) {
        int b = 20;   // block variable
        cout << b;
    }
    // cout << b;  ❌ Error
} -->

Block variable: { } block ke andar ka variable

| Feature       | Local            | Global           | Block         |
| ------------- | ---------------- | ---------------- | ------------- |
| Declaration   | Inside function  | Outside function | Inside `{ }`  |
| Scope         | Function only    | Whole program    | Block only    |
| Lifetime      | Function end tak | Program end tak  | Block end tak |
| Interview Use | ⭐⭐⭐         | ⭐⭐            | ⭐⭐⭐       |


<!-- 5️⃣ What is initialization? -->
Assigning value to a variable at the time of declaration.
Hindi: Variable banate time value dena initialization hota hai.

<!-- int x = 10; -->

<!-- 6️⃣ Can variable name start with a number? -->

❌ No
let num1; //correct
let 1num;  // no correct


<!-- 7️⃣ Are variables case-sensitive? -->
✔️ Yes
int a = 10;
int A = 20;   // different variable

-----------------------------------------------------------------------------------------------------------------------------

<!-- 5. Operators -->
<!-- 🔹 What is an Operator? -->
An operator is a symbol that performs an operation on one or more operands.

<!-- int a = 10 + 5; -->
👉 + is operator
👉 10, 5 are operands

-----------------------------------------------------------------------------------------------------------------------

<!-- 6. Conditions statements  -->
A condition is used to check whether a statement is true or false and execute code accordingly.

--------------------------------------------------------------------------------------------------------------------------

<!-- 7. Loops  -->
A loop is used to execute a block of code repeatedly until a condition becomes false.

<!-- 🔹 TYPES OF LOOPS IN C++ -->

1️⃣ for loop
2️⃣ while loop
3️⃣ do-while loop



<!-- 1️⃣ FOR LOOP -->
for(initialization; condition; increment/decrement){
    // code
}

<!-- 
for(int i = 1; i <= 5; i++){
    cout << i << " ";
} -->


<!-- 2️⃣ WHILE LOOP -->
initialization;
while(condition){
    // code
    increment/decrement;
}
<!-- 

int i = 1;

while(i <= 5){
    cout << i << " ";
    i++;
} -->


<!-- 3️⃣ DO-WHILE LOOP -->

initialization;
do{
    // code
    increment/decrement;
}while(condition);

<!-- 
int i = 1;

do{
    cout << i << " ";
    i++;
}while(i <= 5); -->
----------------------------------------------------------------------------------------------------------------------------------

<!-- 🔹 CONTROL STATEMENTS IN LOOPS -->

✔️ continue:-Skip current iteration & move to next. 

<!-- 
for(int i = 1; i <= 5; i++){
    if(i == 3)  //skip 3
    continue;
    cout << i << " ";
}

output :- 1 2 4 5 
 -->

 ✔️ break :- stop/exits the loop immediately.

<!-- 
 for(int i=1;i<=5;i++){
    if(i==3) break;
    cout << i << " ";
}


output:- 1 2
 -->

REAL LIFE USE

Printing patterns
Array traversal
Searching / counting
Menu driven programs
 -------------------------------------------------------------------------------------------------------------------
<!-- 🔷 FUNCTIONS IN C++ -->

<!-- 🔹 What is a Function? -->
A function is a block of code that performs a specific task and can be reused multiple times.

<!-- 🔹 Why do we need Functions? -->
* Code reuse
* Easy debugging
* Better readability
* Modular programming

<!-- 🔹 TYPES OF FUNCTIONS  -->
1️⃣ Predefined (Built-in) Functions
Already defined in C++ libraries.
cout, cin, sqrt(), pow()


2️⃣ User-Defined Functions
Functions created by programmer.


<!-- 🔹 FUNCTION SYNTAX -->
<!-- 
return_type function_name(parameters){
    // function body
    return value;
} 
-->


<!-- 🔹 FUNCTION DECLARATION (Prototype):-  -->
📌 Tells compiler about function before use.

int add(int, int);

<!-- Why function prototype? -->
👉 To inform compiler before use.


<!-- 🔹 FUNCTION DEFINITION -->

int add( int a, int b){
    return a + b;
}


<!-- 🔹 FUNCTION CALL -->
This is how you execute(use) the function.

<!-- int result = add(10, 20); -->

🔹 COMPLETE EXAMPLE
<!-- 
#include<iostream>
using namespace std;

int add(int a, int b);   // declaration

int main(){
    cout << add(5, 10);
}

int add(int a, int b){  // definition
    return a + b;
} 


Output: 👉 15
-->
--------------------------------------------------------------------------------------------------------

1️⃣ No argument, no return
<!-- 
void show(){
    cout << "Hello";
}
 -->

 2️⃣ Argument, no return
<!-- 
 void sum(int a, int b){
    cout << a + b;
} -->

3️⃣ No argument, return value
<!-- 
int getNumber(){
    return 10;
}
 -->

4️⃣ Argument and return value (Most used)
<!-- 
int square(int x){
    return x * x;
} -->

---------------------------------------------------------------------------------------------------------------------

<!-- 🔹 PASSING PARAMETERS -->

<!-- 1️⃣ Call by Value -->
Call by value means Original value does not change.
<!-- 
void change(int x){
    x = 50;
} -->


<!-- 2️⃣ Call by Reference -->
Call by reference means Original value change.
<!-- 
void change(int &x){
    x = 50;
} -->

-----------------------------------------------------------------------------------------------------------------------

<!-- 🔷 POINTERS IN C++ -->

<!-- 🔹 What is a Pointer? -->
A pointer is a variable that stores the address of another variable.

Pointer ek aisa variable hota hai jo kisi dusre variable ka address store karta hai.

<!-- 🔹 Why do we need Pointers? -->
