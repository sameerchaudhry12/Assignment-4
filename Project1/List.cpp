#include "List.h"
#include <iostream>
using namespace std;

List::List() {
    head = new Node(0);  
}


bool List::emptyList() {
    return head->next == nullptr;
}


void List::insert_after(int oldV, int newV) {
    Node* temp = head->next;
    while (temp != nullptr && temp->data != oldV) {
        temp = temp->next;
    }
    if (temp != nullptr) {
        Node* newNode = new Node(newV);
        newNode->next = temp->next;
        temp->next = newNode;
    }
}


void List::insert_begin(int value) {
    Node* newNode = new Node(value);
    newNode->next = head->next;
    head->next = newNode;
}


void List::insert_end(int value) {
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    Node* newNode = new Node(value);
    temp->next = newNode;
}

void List::delete_Node(int val) {
    Node* temp = head;
    while (temp->next != nullptr && temp->next->data != val) {
        temp = temp->next;
    }
    if (temp->next != nullptr) {
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
}


void List::delete_begin() {
    if (head->next != nullptr) {
        Node* toDelete = head->next;
        head->next = head->next->next;
        delete toDelete;
    }
}

void List::delete_end() {
    if (head->next == nullptr) return;  

    Node* temp = head;
    while (temp->next != nullptr && temp->next->next != nullptr) {
        temp = temp->next;
    }

    if (temp->next != nullptr) {
        delete temp->next;
        temp->next = nullptr;
    }
}


void List::traverse() {
    Node* temp = head->next;
    while (temp != nullptr) {
       cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout<<"Nullptr" << endl;
}
