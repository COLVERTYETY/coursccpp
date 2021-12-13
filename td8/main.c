#include "functions.h"

int main() {
    Node * root = (Node* )malloc(sizeof(Node));
    root->data = 5;
    root = insert(root,1);
    root = insert(root,10);
    root = insert(root,2);
    root = insert(root,5);
    root = insert(root,4);
    root = insert(root,14);
    root = insert(root,24);
    root = insert(root,34);
    root = insert(root,44);
    root = insert(root,54);
    root = insert(root,9);
    root = insert(root,3);
    printInOrder(root);
    printf("\n");
    //root = delete(root,2);
    printInOrder(root);
    printf("\n");
    printf("%d",isBinarySearchTree(root));
    printf("%d",isAVL(root));
    printf("\n");
    printLastLayer(root);
    printf("\n");
    Node * rootB = (Node* )malloc(sizeof(Node));
    rootB->data = 5;
    rootB = insert(rootB,1);
    rootB = insert(rootB,10);
    rootB = insert(rootB,2);
    rootB = insert(rootB,5);
    rootB = insert(rootB,4);
    rootB = insert(rootB,14);
    rootB = insert(rootB,24);
    rootB = insert(rootB,34);
    rootB = insert(rootB,44);
    rootB = insert(rootB,94);
    rootB = insert(rootB,9);
    rootB = insert(rootB,3);
    printInOrder(rootB);
    printf("\n");
    printf("%d",equivalent(rootB,root));
    printf("\n");
    return 0;
}
