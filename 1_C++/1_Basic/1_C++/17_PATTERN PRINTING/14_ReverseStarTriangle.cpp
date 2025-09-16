// Print the given pattern

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Entere the number of rows :";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){ //j<=n print star square
                                      //j<=i print star triangle
                                      //j<=n-i+1 print reverse star triangle
            cout<<'*'<<" ";// Print star
        }
        cout<<endl;
    }
return 0;   
}