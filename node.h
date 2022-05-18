#ifndef LINKED_LIST_NODE_H
#define LINKED_LIST_NODE_H

//node.h
struct Node {
    char* data;
    struct Node* prev;
    struct Node* next;
};

typedef struct Node Node;

#endif //LINKED_LIST_NODE_H
