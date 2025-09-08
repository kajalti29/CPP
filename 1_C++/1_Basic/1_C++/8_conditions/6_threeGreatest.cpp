// Take 3 positive integers input and print the greatest of them.

// #include<iostream>
// using namespace std;
// int main(){
//     int a, b, c;
//     cout<<"Enter three positive integers :";
//     cin >> a >> b >> c;
//     int greatest;
//     if (a > b && a > c) {
//         greatest = a;
//     } else if (b > c) {
//         greatest = b;
//     } else {
//         greatest = c;
//     }
//     cout << "The greatest number is: " << greatest << endl;
//     return 0;
//     }


                         // OR

    #include<iostream>
    using namespace std;
    int main(){
        int a, b, c;
        cout<<"Enter first number :";
        cin>>a;
        cout<<"Enter second number :";
        cin>>b;
        cout<<"Enter third number :";
        cin>>c;
        if(a>b and a>c){
            cout<<a <<" is greaterst";
        }
        else if(b>a and b>c){
            cout<<b<<" 6is greaterst";
        }
        else{
            cout<<c<<" is greaterst";
        }
    }                     