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

void deleteFront(node **head){
    if(head!=NULL){ // or !head
        node* temp = (*head);
        *head = temp->next;
        free(temp);
    }
    
}

void deleteBack(node **head ){
    if (head!=NULL){
        node* active = *head;
        if(active->next==NULL){
            free(head);
            *head = NULL;
        }else{
            while (active->next!=NULL && active->next->next!=NULL){
                active = active->next;
            }
            free(active->next);
            active->next = NULL;
        }
        
    }
    
}

void deleteAt(node ** head, int pos){
    if (head!=NULL){
        node* active = *head;
        node* last =NULL;
        int i=0;
        while (active->next!=NULL && i!=pos){
            last = active;
            active = active->next;
            i++;
        }
        if(last!=NULL){
            last->next = active->next;
            free(active);
        }else{
            deleteFront(head);
        }
        
    }
}

void deleteALL(node *head){
    if(head!=NULL){
        deleteALL(head->next);
    }
    free(head);
}

void printlist(node **head){
    node* active = *head;
    while (active!=NULL){
        printf("%d ",active->value);
        active = active->next;
    }
    printf("\n");
}
