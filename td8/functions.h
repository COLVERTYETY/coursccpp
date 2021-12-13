#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

typedef struct Node { 
    int data; 
    struct Node * left; 
    struct Node * right; 
} Node;
void prettyprint(Node * tree);
void printInOrder(Node * tree);
Node * insert(Node * tree, int value);
int isBinarySearchTree(Node * tree);
int isAVL(Node * tree);
int printLastLayer(Node * tree);
int equivalent(Node * A,Node * B);
int delete(Node * tree, int val);
