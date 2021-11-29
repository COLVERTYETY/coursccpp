#include "functions.h"
 
void printInOrder(Node * tree){
    if(tree!=NULL){
        printInOrder(tree->left);
        printf("%d ", tree->data);
        printInOrder(tree->right);
    }
}
Node * insert(Node * tree, int value){
    if(tree!=NULL){
        if(tree->data<value){
            tree->right = insert(tree->right,value);
            return tree;
        }else if(tree->data>value){
            tree->left = insert(tree->left, value);
            return tree;
        }else{
            return tree;
        }
    }else{
        Node *new = (Node*)malloc(sizeof(Node));
        new->data = value;
        new->left = NULL;
        new->right = NULL;
        return new;
    }
}

Node * Max(Node * tree){
    
}

Node *delete(Node * tree, int value){
    if(tree!=NULL){
        if(tree->data == value){
            if(tree->left==NULL && tree->right == NULL){
                free(tree);
                return NULL;
            }
            else if((tree->left==NULL)+(tree->right==NULL)==1){
                return (tree->right==NULL)?tree->left:tree->right;
            }else{

            }
        }else{
            return delete((tree->data>value)?tree->right:tree->left, value);
        }
    }
    return(tree);
}