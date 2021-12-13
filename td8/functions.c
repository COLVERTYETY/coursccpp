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

int isBinarySearchTree(Node * tree){
    if(tree!=NULL){
        if(tree->left!=NULL && tree->left->data > tree->data){
            return false;
        }
        if(tree->right!=NULL && tree->right->data <tree->data){
            return false;
        }
        if(!isBinarySearchTree(tree->right) || !isBinarySearchTree(tree->left)){
            return false;
        }
    }
    return true;
}
int isAVL(Node * tree){ //! IS BROKEN ?
    if(tree !=NULL){
        if(tree->left!=NULL && tree->right!=NULL){
            return isAVL(tree->right) && isAVL(tree->left);
        }
        if(tree->left!=NULL && (tree->left->left!=NULL || tree->left->right!=NULL)){
            return false;
        }
        if(tree->right!=NULL && (tree->right->left!=NULL || tree->right->right!=NULL)){
            return false;
        }
    }
    return true;
}
int printLastLayer(Node * tree){
    if(tree!=NULL){
        
        if(tree->right==NULL && tree->left==NULL){
            printf("%d",tree->data);
            
        }
        printLastLayer(tree->left);
        printLastLayer(tree->right);
    }
}

int delete(Node * tree, int val){
    Node* work = tree;
    Node* where=NULL;
    Node * last = NULL;
    while(work!=NULL){
        if(val>work->data){
            last = work;
            work = work->right;
        } else if( val < work->data){
            last = work;
            work = work->left;
        }
        else if( val == work->data){
            //found !!!
            // now we delete
            //leaf?
            if(work->left==NULL && work->right==NULL){
                free(work);
            }else if(work->left==NULL){ //leftchild or none
                if(last->data<val){
                    last->left = work->right; 
                } else{
                    last->right = work->right;
                }
                free(work);
            }else if(work->right==NULL){ //rightchild or none
                if(last->data<val){
                    last->left = work->left; 
                } else{
                    last->left = work->right;
                }
                free(work);
            }
            // two children
            // find min of right tree, is a leaf
            Node *temp = work->right;
            while(temp!=NULL){
                temp = temp->left;
            }
            // we don't delete work but replace with the leaf 
            work->data = temp->data;
            free(temp);
            // since we did delete a value return true
            return true;
        }
    }
    return false;
}



int equivalent(Node * A,Node * B){
    if( A==NULL && B==NULL){
        return true;
    }
    if(A!=NULL && B!=NULL){
        // for each element of A remove it from B
        while(A!=NULL){
            Node* tosearch;
            Node* work=A;
            // get a leaf f A
            while(work!=NULL){
                if(work->right!=NULL){
                    work = work->right;
                }else if (work->left!=NULL){
                    work = work->left;
                } else if(work->left==NULL && work->right==NULL){
                    tosearch = work;
                    break;
                }
            }
            // remove from B and check if succeded
            int res = delete(B, tosearch->data);
            if(!res){
                return false;
            }
        }
        if(B!=NULL){
            return false;
        }
        return true;
    }else{
        return false;
    }
    
}

