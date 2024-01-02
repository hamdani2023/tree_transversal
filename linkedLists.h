#ifndef LINKEDLISTS_H_INCLUDED
#define LINKEDLISTS_H_INCLUDED

#include <iostream>
#include <iomanip>
using namespace std;

// Definition of the structure of a node in the linked list
struct Nd {
    int data;       // Data of the node
    Nd* next;       // Pointer to the next node
};

// Function to display the elements of the linked list
void displayList(Nd* head) {
    Nd* current = head;
    while (current != nullptr) {
        cout << setw(6) << current->data  ;
        current = current->next;
    }
    cout << endl;
}

// Function to insert a new element at the end of the linked list
void insertAtEnd(Nd*& head, int value) {
    Nd* newNode = new Nd;   // Creating a new node
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        // If the list is empty, the new node becomes the head of the list
        head = newNode;
    } else {
        // Otherwise, traverse the list to the end and add the new node
        Nd* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to insert a new element at the head of the linked list
void insertAtHead(Nd*& head, int value) {
    Nd* newNode = new Nd;   // Creating a new node
    newNode->data = value;
    newNode->next = head;   // The new node points to the current head
    head = newNode;         // The new node becomes the new head
}






























#endif // LINKEDLISTS_H_INCLUDED
