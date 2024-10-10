#include "List.h"
#include <iostream>
using namespace std;
int main() {
    List list;

    list.insert_begin(10);
    list.insert_end(20);
    list.insert_end(30);
    list.insert_after(20, 25);

    cout << "List after inserting elements: ";
    list.traverse();

    list.delete_begin();
    cout << "List after deleting from the beginning: ";
    list.traverse();

    list.delete_end();
    cout << "List after deleting from the end: ";
    list.traverse();

    list.delete_Node(25);
    cout << "List after deleting node with value 25: ";
    list.traverse();

    return 0;
}
