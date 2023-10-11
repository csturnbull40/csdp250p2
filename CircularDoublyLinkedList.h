//
//  CircularDoublyLinkedList.h
//  csdp250P2
//
//  Created by Chris Turnbull on 10/10/23.
//

#ifndef CircularDoublyLinkedList_h
#define CircularDoublyLinkedList_h

#include "node.h"

class CircularDoublyLinkedList {
private:
    Node* head;

public:
    CircularDoublyLinkedList();
    ~CircularDoublyLinkedList();

    void append(int data);
    void display();
    void performAssignments();

    Node* getHead();
};

#endif


