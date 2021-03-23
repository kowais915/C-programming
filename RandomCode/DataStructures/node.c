#include <stdio.h>
#include <stdlib.h>


typedef struct node{

    int data;
    struct node *next; 
} node;

void start (node *head){

    node *ptr = head;

while (ptr!=NULL)
{

    printf("%d\n", ptr->data);
    ptr = ptr->next;

}

printf("\n");
}

int main(){

node n1;
node n2;
node n3;

node * head;
n1.data = 10;
n2.data = 20;
n3.data = 30;

n1.next = &n2;
n2.next = &n3;
n3.next = NULL;

start(&n1);

}