#include <stdlib.h>
#include <stdio.h>

typedef struct linked {
    int data;
    struct linked *next;


} node;

//function to ietrate through a linked list
void printer(node *head){
    node *temp = head;
    while (temp!=NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    
}

//function to add a value to the end of the linked list
void addAtend(node *head, int val){
    node *temp;
    node *tempVal;
    temp =head;
    tempVal= (node*)malloc(sizeof(node));
    if(tempVal==NULL){
        printf("Error! Memory was not allocated!");
        exit(-1);
    }
    tempVal ->data=val;
    tempVal->next=NULL;
    while (temp->next!=NULL)
    {
        temp = temp->next;

    }
    temp->next = tempVal;
    


}

int main(){

    node *ptr = (node*)malloc(sizeof(node));
    if(ptr==NULL){
        printf("Error!");
        exit(-1);
    }
    node *head;
    head = ptr;
    
    ptr->data = 30;
    ptr->next = (node*)malloc(sizeof(node));
    ptr->next->data =50;
    ptr->next->next = NULL;


    addAtend(head, 40);
    printer(head);






  
}