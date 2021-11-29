#include <stdio.h>
#include <stdlib.h>

typedef struct Node { 
    int data; 
    struct Node * left; 
    struct Node * right; 
} Node;
void prettyprint(Node * tree);
void printInOrder(Node * tree);
Node * insert(Node * tree, int value);
Node *delete(Node * tree, int value);