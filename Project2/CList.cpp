#include "CList.h"
#include <iostream>
using namespace std;

CList::CList() {
    head = nullptr;  
}


bool CList::emptyList() {
    return head == nullptr;
}

void CList::insert_at(int pos, int value) {
    if (pos == 1) {
       cout << "Position 1 is reserved for the head node, use insert_begin instead." << endl;
        return;
    }
    Node* newNode = new Node(value);
    if (emptyList()) {
        cout << "List is empty, please insert at the beginning." << endl;
        return;
    }
    Node* temp = head;
    int count = 1;

    
    while (temp->next != head && count < pos - 1) {
        temp = temp->next;
        count++;
    }
    if (count != pos - 1) {
        cout << "Position out of range!" << endl;
        return;
    }

    
    newNode->next = temp->next;
    temp->next = newNode;
}


void CList::insert_begin(int value) {
    Node* newNode = new Node(value);
    if (emptyList()) {
        head = newNode;
        newNode->next = head;
    }
    else {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
        head = newNode;
    }
}


void CList::insert_end(int value) {
    Node* newNode = new Node(value);
    if (emptyList()) {
        head = newNode;
        newNode->next = head;
    }
    else {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
}


void CList::deleteNode(int pos) {
    if (pos == 1) {
        cout << "Cannot delete the first node using this function, use delete_begin instead" << endl;
        return;
    }

    if (emptyList()) {
       cout << "List is empty" << endl;
        return;
    }

    Node* temp = head;
    int count = 1;

    while (temp->next != head && count < pos - 1) {
        temp = temp->next;
        count++;
    }

    if (temp->next == head || count != pos - 1) {
        cout << "Position not in range" << endl;
        return;
    }

    Node* toDelete = temp->next;
    temp->next = toDelete->next;
    delete toDelete;
}

void CList::delete_begin() {
    if (emptyList()) {
      cout << "List is empty " << endl;
        return;
    }

    if (head->next == head) {  
        delete head;
        head = nullptr;
    }
    else {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        Node* toDelete = head;
        temp->next = head->next;
        head = head->next;
        delete toDelete;
    }
}

void CList::delete_end() {
    if (emptyList()) {
       cout << "List is empty " << endl;
        return;
    }

    if (head->next == head) { 
        delete head;
        head = nullptr;
    }
    else {
        Node* temp = head;
        while (temp->next->next != head) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = head;
    }
}


void CList::traverse() {
    if (emptyList()) {
        cout << "List is empty " << endl;
        return;
    }
    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
   cout <<"Nullptr" << endl;
}
