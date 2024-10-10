#include<iostream>
using namespace std;


class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class CList {
private:
    Node* head;  
public:
    CList();  

    bool emptyList();  
    void insert_at(int pos, int value);  
    void insert_begin(int value);  
    void insert_end(int value);  
    void deleteNode(int pos);  
    void delete_begin();  
    void delete_end(); 
    void traverse(); 
};


