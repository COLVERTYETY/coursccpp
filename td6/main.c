#include "functions.h"

int main() {
    Node * head = (Node* )malloc(sizeof(Node));
    head->data = 5;
    head = insert(head,1);
    head = insert(head,10);
    head = insert(head,2);
    head = insert(head,5);
    head = insert(head,4);
    head = insert(head,9);
    printInOrder(head);
    printf("\n");
    head = delete(head,2);
    printInOrder(head);
    return 0;
}
