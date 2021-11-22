#include "../include/headers.h"

void insertFront(struct Node **head, int val){
    node* newHead = (node*)malloc(1*sizeof(node));
    newHead->value=val;
    newHead->next=*head;
    **head = *newHead;
}
void printlist(node *head){
    node* active = head;
    while (active!=NULL){
        std::cout << active->value << " ";
        active = active->next;
    }
    std::cout << "\n";
}

void deletall(node *head){
    if(head!=NULL){
        deletall(head->next);
    }
    free(head);
}