// एक Palindrome वह string, number या sequence होता है जो आगे और पीछे से एक जैसा पढ़ा जाता है।
// उदाहरण: "madam", "121", "level"


#include<iostream>
using namespace std;

int main(){
    string str;
    cout<< "Enter a string :";
    cin >> str;

    int n = str.length();
    bool palindrome = true;


    for(int i = 0; i< n/2; i++){
        if(str[i] != str[n - i -1]){
            palindrome = false;
            break;
        }
    }

    if(palindrome)
         cout<<str<<" is a palindrom";
    else
          cout<<str<<" is not a palindrom";
return 0;
}