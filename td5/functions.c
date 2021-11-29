#include "functions.h"
 
void insertFront(node **head, int val){
    node* newHead = (node*)malloc(1*sizeof(node));
    newHead->value=val;
    newHead->next=*head;
    *head = newHead;
}
void insertBack(node **head, int val){
    node* active = *head;
    node* newnode = (node*)malloc(1*sizeof(node));
    newnode->value = val;
    if (active!=NULL){
        while (active->next!=NULL){
            active = active->next;
        }
    }
    active->next = newnode;
}

void insertAfter(node **head, int pos, int val){
    node* active = *head;
    node* newnode = (node*)malloc(1*sizeof(node));
    newnode->value = val;
    int i=0;
    if (active!=NULL){
        while (active->next!=NULL && i!=pos){
            active = active->next;
            i++;
        }
        newnode->next = active->next;
        active->next = newnode;
    }
}

void printlist(node **head){
    node* active = *head;
    while (active!=NULL){
        printf("%d ",active->value);
        active = active->next;
    }
    printf("\n");
}

void deleteALL(node *head){
    if(head!=NULL){
        deleteALL(head->next);
    }
    free(head);
}

void deleteFirstVal(node ** head, int val){
    if((*head)!=NULL){
        node * precedent;
        node * active = *head;
        while(active!=NULL){
            if(active->value==val){
                if(active==(*head)){
                    node* temp = (*head);
                    *head = temp->next;
                    free(temp);
                    active = (*head);
                    break;
                }else{
                    precedent->next = active->next;
                    free(active);
                    active = precedent;
                    break;
                }
            }else{
                precedent = active;
                active = active->next;
            }
        }
        
    }
}

void deleteVal(node ** head, int val){
    if((*head)!=NULL){
        node * precedent;
        node * active = *head;
        while(active!=NULL){
            if(active->value==val){
                if(active==(*head)){
                    *head = active->next;
                    free(active);
                    active = (*head);
                }else{
                    precedent->next = active->next;
                    free(active);
                    active = precedent;
                }
            }else{
                precedent = active;
                active = active->next;
            }
        }
        
    }
}

