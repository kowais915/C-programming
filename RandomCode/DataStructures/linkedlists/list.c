#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    int data;
    struct node *link;

} node;

int count(node *head){
    int count = 0;
    if(head == NULL){
        printf("The linked list is empty!\n");

    }
    else{
        node *ptr = NULL;
        ptr= head;
        while(ptr!=NULL){
            printf("The data in node %d is: %d\n",count, ptr->data );
            count = count + 1;
            ptr =ptr->link;
        }
        

    }
    return 0;
}

void printer(node *head){
    node *ptr = head;
    while(head != NULL){
        printf("The data in the node is: %d\n", ptr->data);
        ptr = ptr->link;
    }
    
}

int main(){
    //23, 43 , 22, 11, 23

    //assigning memory to the node in heap
    node *head = NULL;
    head = (node*)malloc(sizeof(node));
    head->data = 23;
    head->link =NULL;

    //joining the second node
    node *current = NULL;
    current = malloc(sizeof(node));
    current->data = 43;
    head->link = current;

    //joining the third node
    current = malloc(sizeof(node));
    current->data = 22;
    head->link->link =  current;

    //joing the fourth node
    current = malloc(sizeof(node));
    current->data = 11;
    head->link->link->link = current;
    head->link->link->link->link= NULL;

    count(head);

    // printer(head);


    

}