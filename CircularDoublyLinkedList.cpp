//
//  CircularDoublyLinkedList.cpp
//  csdp250P2
//
//  Created by Chris Turnbull on 10/10/23.
//

#include "CircularDoublyLinkedList.h"
#include <iostream>

using namespace std;

Node::Node(int data) : data(data), next(nullptr), prev(nullptr) {}

CircularDoublyLinkedList::CircularDoublyLinkedList() : head(nullptr) {}

CircularDoublyLinkedList::~CircularDoublyLinkedList() {
    if (!head) return;
    Node* current = head;
    do {
        Node* next = current->next;
        delete current;
        current = next;
    } while (current != head);
}

void CircularDoublyLinkedList::append(int data) {
    Node* newNode = new Node(data);
    if (!head) {
        head = newNode;
        newNode->next = newNode;
        newNode->prev = newNode;
    } else {
        Node* last = head->prev;
        last->next = newNode;
        newNode->prev = last;
        newNode->next = head;
        head->prev = newNode;
    }
}

void CircularDoublyLinkedList::display() {
    if (!head) return;
    Node* current = head;
    do {
        cout << current->data << " ";
        current = current->next;
    } while (current != head);
    cout << endl;
}

void CircularDoublyLinkedList::performAssignments() {
    if (!head) return;
    head->next->next->next = head->prev;
    head->prev->prev->prev = head->next->next->next->prev;
    head->next->next->next->prev = head->prev->prev->prev;
    head->next = head->next->next;
    head->next->prev->next = head->next->next->next;
}

Node* CircularDoublyLinkedList::getHead() {
    return head;
}
