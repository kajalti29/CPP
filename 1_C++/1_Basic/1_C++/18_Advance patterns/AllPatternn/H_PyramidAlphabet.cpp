#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows :";
    cin>>n;
        for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i; j++) cout<<" ";      // spaces
    for(int j=1; j<=i; j++) cout<<(char)('A'+j-1);   // increasing
    for(int j=i-1; j>=1; j--) cout<<(char)('A'+j-1); // decreasing
    cout<<endl;
    }
return 0;
}
