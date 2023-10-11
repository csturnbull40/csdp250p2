//
//  node.h
//  csdp250P2
//
//  Created by Chris Turnbull on 10/10/23.
//

#ifndef node_h
#define node_h

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data);
};

#endif
