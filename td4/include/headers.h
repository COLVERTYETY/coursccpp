#include <string>
#include <iostream>
#include <cstring>

typedef struct Node{
    int value;
    struct Node* next;
}node;

void insertFront(struct Node **head, int val);
void insertBack(struct Node **head, int val);
void insertAfter(struct Node **head, int pos, int val);
void deleteFront(struct Node **head);
void deleteBack(struct Node **head );
void deleteAt(struct Node ** head, int i);
void printlist(node **head);
void deleteall(node *head);