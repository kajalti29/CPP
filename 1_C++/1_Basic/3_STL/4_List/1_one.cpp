// list एक doubly linked list है।
// इसमें elements non-contiguous memory में store होते हैं।
// Insertion और deletion किसी भी position पर O(1) में possible है।

// | Function         | काम                                      | Example             |
// | ---------------- | ---------------------------------------- | ------------------- |
// | `push_back(x)`   | last में element add करता है             | `l.push_back(5);`   |
// | `push_front(x)`  | first में element add करता है            | `l.push_front(1);`  |
// | `pop_back()`     | last element remove करता है              | `l.pop_back();`     |
// | `pop_front()`    | first element remove करता है             | `l.pop_front();`    |
// | `insert(pos, x)` | given position पर element add करता है    | `l.insert(it, 50);` |
// | `erase(pos)`     | given position पर element remove करता है | `l.erase(it);`      |
// | `clear()`        | सारे elements remove करता है             | `l.clear();`        |
// | `size()`         | elements count return करता है            | `l.size();`         |
// | `empty()`        | check empty or not                       | `l.empty();`        |
// | `sort()`         | list को sort करता है                     | `l.sort();`         |
// | `reverse()`      | list reverse करता है                     | `l.reverse();`      |



#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l1;                   //empty list
    list<int> l2 = {10, 20, 30};    //initializer list
    
return 0;
}