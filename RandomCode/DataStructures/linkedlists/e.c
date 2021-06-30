#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <limits.h>

typedef struct linkedlist{
    int data;
    struct linkedlist *next;

} node;



//====function prototypes====

void insertAtBeg(node **head, int val);
void insertAtend(node *head, int val);
void print(node *head);
//===========================


int main(){



    return 0;

}

//====functions definitions====

void print(node *head){

    if(head==NULL){
        printf("Error! The head is empty");
        exit(0);
    
    }
    node *temp;
    temp = head;

    while(temp!=NULL){
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    


}

//===============================

void insertAtBeg(node **head, int val){
    node *newnode = (node*)malloc(sizeof(node));
    newnode->data =val;
    newnode->next = *head;
    *head = newnode;

}

//================================
void insertAtend(node *head, int val){
    node *newnode = (node*)malloc(sizeof(node));
    node *temp;
    temp = head;
    while(temp->next!=NULL){
        temp = temp ->next;
    }

    temp->next = newnode;
    newnode->data = val;
}