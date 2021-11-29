#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int value;
    struct Node* next;
}node;

void deleteALL(node *head);
void insertFront(node **head, int val);
void insertBack(node **head, int val);
void insertAfter(node **head, int pos, int val);
void printlist(node **head);
void deleteVal(node ** head, int val);
void deleteFirstVal(node ** head, int val);
