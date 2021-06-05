#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    int data;
    struct Node *next;

} node;






int main(){
node *head = (node*)malloc(sizeof(node));
head->data = 23;
head->next = NULL;

// printf("The data in the struct is: %d", head->data);
// printf("The address in the struct is: %d", head);




}