#include "CList.h"
#include <iostream>
using namespace std;
int main() {
    CList list;

 
    list.insert_begin(10);
    list.insert_end(20);
    list.insert_end(30);
    list.insert_at(3, 25); 

    cout << "List after inserting elements: ";
    list.traverse();

    
    list.delete_begin();
    cout << "List after deleting from the beginning: ";
    list.traverse();

   
    list.delete_end();
    cout << "List after deleting from the end: ";
    list.traverse();

    
    list.deleteNode(2);  
    cout << "List after deleting node at position 2: ";
    list.traverse();

    return 0;
}
