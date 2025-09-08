// ## 🔹 Typecasting क्या है?

// जब हम एक **data type** की value को दूसरे **data type** में बदलते हैं, तो उसे **typecasting** कहते हैं।

// 👉 Example: `int` को `float` में बदलना या `char` को `int` में बदलना।

// -------------------------------------------------------------------------------------------------------------------------------------

// ## 🔹 Types of Typecasting in C++

// C++ में typecasting के दो मुख्य प्रकार होते हैं:

// ### 1. **Implicit Typecasting (Type Conversion / Type Promotion)**

// 👉 इसे **compiler** अपने आप कर देता है।
// छोटे data type को बड़े data type में बदल देता है।

// ✅ Example:

// ```cpp
// #include <iostream>
// using namespace std;

// int main() {
//     int x = 10;
//     float y = x;   // int से float में automatic conversion
//     cout << y;     // Output: 10.0
//     return 0;
// }
// ```

// ---------------------------------------------------------------------------------------------------------------------------------------

// ### 2. **Explicit Typecasting (Type Casting by User)**

// 👉 इसे हम खुद manually करते हैं, compiler अपने आप नहीं करता।

// ✅ Syntax:

// ```cpp
// (data_type) value;
// ```

// ✅ Example:

// ```cpp
// #include <iostream>
// using namespace std;

// int main() {
//     float a = 5.7;
//     int b = (int)a;   // float को int में बदला
//     cout << b;        // Output: 5
//     return 0;
// }
// ```

// ----------------------------------------------------------------------------------------------------------------------------------------

