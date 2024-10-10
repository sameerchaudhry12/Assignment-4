#pragma once
#include<iostream>
using namespace std;
 class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class List {
private:
    Node* head;  
public:
    List();  

    bool emptyList();  
    void insert_after(int oldV, int newV); 
    void insert_begin(int value);  
    void insert_end(int value);  
    void delete_Node(int val);  
    void delete_begin();  
    void delete_end();  
    void traverse();  
};

