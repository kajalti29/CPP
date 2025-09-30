#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);

    cout << "Size:" << v.size() <<endl;
    cout << "Size:" << v.capacity() <<endl;
return 0;
}