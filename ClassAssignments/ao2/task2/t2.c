#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int integers;
    struct node *next;

} node;

void reverseLink(node **head){
    node *previous = NULL;
    node *next = NULL;
    node *curr = *head;

    while (curr!=NULL)
    {
        next = curr->next;
        curr->next = previous;
        previous = curr;
        curr = next;
    }
    *head = previous;
}

//the function that prints the linkedlist
void print(node *start){
node *i = start;
while (i!=NULL)
{
    printf("%d ", i->integers);
    i = i->next;
}



}
int main(){
node *head =NULL;

node num1;
node num2;
node num3;
node num4;
num1.integers = 2;
head = &num1;
num1.next = &num2;


num2.integers = 3;
num2.next =&num3;


num3.integers = 4;
num3.next =&num4;


num4.integers = 5;
num4.next =NULL;

reverseLink(&head);
printf("The linked has been reversed\n");
printf("Printing the reversed list\n");

print(head);


return 0;
}


