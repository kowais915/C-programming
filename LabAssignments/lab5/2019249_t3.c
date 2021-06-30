#include <stdio.h>
#include <stdlib.h>
#define size 50;

typedef struct queue
{
    int data;
    int pri;
    struct queue *next;
    
} queue;

//declaring a function that creates a node

queue* new (int x, int y){
    //x = data y = priority
queue *newly = (queue*)malloc(sizeof(queue));
newly -> data = x;
newly -> pri = y;
newly->next = NULL;

return newly;

}

int headVal(queue **head){

return (*head)->data;

}

//removes elements
void knock(queue **start){
    queue *newly = *start;
    (*start) = (*start) -> next;
    free(newly);

}

//priority fn
void push(queue ** head, int data, int p)
{
    queue *start = (*head);
    queue *temp = new(data, p);

    if ((*head)->pri > p)
    {
        /* code */
        temp->next = *head;
        (*head) = temp;

    }
    else
    {

        while (start -> next != NULL && start ->next->pri<p)
        {
            /* code */
            start= start ->next;

        }
        temp->next =start->next;
        start->next = temp;
        
    }
    

}

//empty fn

int empt(queue **head)
{
    return (*head) == NULL;
}

int main(int arga, char *argb[])
{


queue *mn = new(5, 2);
push(&mn, 3, 5);
while (!empt(&mn))
{
    /* code */
    printf("%d", headVal(&mn));
    knock(&mn);
}


}











int main(int arga, char *argb[]){

}