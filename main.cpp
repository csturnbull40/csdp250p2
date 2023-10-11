//
//  main.cpp
//  csdp250P2
//
//  Created by Chris Turnbull on 10/10/23.
//

#include "CircularDoublyLinkedList.h"
#include <iostream>

using namespace std;

int main() {
    CircularDoublyLinkedList list;

    for (int i = 1; i <= 5; ++i) {
        list.append(i * 11);
    }

    cout << "Initial list: ";
    list.display();

    list.performAssignments();
    cout << "After performing assignments: ";
    list.display();

    // Display the final linked list table
    Node* current = list.getHead();
    cout << "\t1st node\t2nd node\t3rd node\t4th node\t5th node" << endl;
    cout << "Node value\t";
    do {
        cout << current->data << "\t\t";
        current = current->next;
    } while (current != list.getHead());
    cout << endl;

    current = list.getHead();
    cout << "Value of Previous node\t";
    do {
        cout << current->prev->data << "\t\t";
        current = current->next;
    } while (current != list.getHead());
    cout << endl;

    current = list.getHead();
    cout << "Value of next node\t";
    do {
        cout << current->next->data << "\t\t";
        current = current->next;
    } while (current != list.getHead());
    cout << endl;

    return 0;
}
