#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct nodeorg{
    char *integers;
    struct nodeorg *next;

} nodeorg;

typedef struct numbers{
    int data;
    struct numbers *next;
} numbers;

void reverseLink(numbers **head){
    numbers *previous = NULL;
    numbers *next = NULL;
    numbers *curr = *head;

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
void print(numbers *start){
numbers *i = start;
while (i!=NULL)
{
    printf("%d ", i->data);
    i = i->next;
}



}
int main(int arga, char *argb[]){

//Making sure the user inputs at least two arguments
if(arga!=2){
printf("Please provide two arguments!");
}

//Defining a pointer of type FILE
    FILE *fp;


//using the fopen function along with "r" which is a mode and stands for read
fp = fopen(argb[1], "r");

//Error Handling
if(fp == NULL){
     fprintf(stderr, "You encountered an error!");
    exit(1);
}
  
//maintaing two pointers i.e head for the start and current for the current
//both the pointers are NULL
nodeorg *current =NULL;
nodeorg *head =NULL;
char line[200];

while (fgets(line, sizeof(line), fp))
{
    nodeorg *dyna = malloc(sizeof(nodeorg));
    dyna->integers = strdup(line);
    dyna->next =NULL;

      if(head == NULL){
            current = dyna;
            head= dyna;
        } else {
            current = current->next;
            current->next= dyna;
        }
}
fclose(fp);


//maintaining a pointer for the reverse function

//printing the inserted data that was inserted into the linkedlist
  for(current = head; current ; current=current->next){
        printf("Data from the text file has been loaded to a linked insert\n");
        printf("%s\n", current->integers);
    

    }

    

numbers *head1 =NULL;

numbers num1;
numbers num2;
numbers num3;
numbers num4;
numbers num5;
numbers num6;


head1 = &num1;
num1.data = 5;
num1.next = &num2;


num2.data = 1;
num2.next =&num3;


num3.data = 2;
num3.next =&num4;


num4.data = 3;
num4.next =&num5;

num5.data = 4;
num5.next = &num6;

num6.data = 5;
num6.next = NULL;

reverseLink(&head1);
printf("The linked has been reversed\n");
printf("Printing the reversed list\n");

print(head1);


// reverseLink(&current);

// printf("%s ", head->integers);


return 0;
}


