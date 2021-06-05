#include <stdio.h>
#include<stdlib.h>

typedef struct linked{
    int data;
    struct linked *next;

}node;

void printer(node *head){
    node *temp = head;
    while (temp!=NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    
}

int main(){

node *mypointer = (node*)malloc(sizeof(node));
//error checking
node *head;
head = mypointer;


if(mypointer==NULL){
    printf("Error!");
    exit(-1);
}

mypointer->data =30;
mypointer->next = (node*)malloc(sizeof(node));
mypointer->next->data = 20;
mypointer->next->next = (node*)malloc(sizeof(node));
mypointer->next->next->data=40;
mypointer->next->next->next=NULL;


//a function that prints the list

printer(head);



    return 0;
}