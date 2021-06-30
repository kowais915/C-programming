#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<time.h>

typedef struct node
{
    int data;
    struct node *next;
    /* data */

} node;

//new node pusher; needs to be passed the address of the head node.
void enterData(node** head){
  node *new = malloc(sizeof(node));
  printf("How many entries do you have?\n");
  int entries;
        
  scanf("%d", &entries);
  printf("Got it! Please enter your data now: \n");
  int i;
  int userinput;
  
  for(i=0; i<entries; i++){
      scanf("%d", new->data);
       new->next = *head;
       *head = new;
  }

 

}

//printer
void printer(node* ptr){
    while (ptr != NULL)
    {
        /* code */
        printf("%d ", ptr->data);
        ptr = ptr ->next;
    }
    

}
//mergesort helper
void split(node* s, node** f, node** b){
    node* f1;
    node* s1;
    s1 = s;
    f1 =  s->next;

    while(f1 != NULL){
        f1 = f1->next;
        if (f1!=NULL)
        {
            /* code */
            s1 = s1->next;
            f1 = f1->next;
        }
        
    }
    *f = s;
    *b = s1->next;
    s1->next=NULL;

}

//sort
node* sorted(node* x, node* y){
    node* final = NULL;
    if(x==NULL){
        return (y);
    }
    else if(y==NULL){
        return (x);
    }


    if (x->data <= y->data)
    {
        /* code */
        final = x;
        final->next = sorted(x->next, y);
    }
    else{
        final = y;
        final->next = sorted(x, y->next);
    }
    return(final);
    
}

//function using merge sorting
void merger(node** headptr){

    node* head = *headptr;
    node* h1;
    node* h2;
    if (head->next==NULL || head==NULL)
    {
        /* code */
        return;

    }

    split(head, &h1, &h2);

    //using recursion
    merger(&h1);
    merger(&h2);

    *headptr = sorted(h1, h2);
    
}





void asker(){
    printf("=====================================================================\n");
    printf("=====================================================================\n");
    
    printf("\t\t\t\t\t\t\n\n Welcome to the sorting wizard!\n\n");


    printf("=====================================================================\n");
    printf("=====================================================================\n");

    printf("\t\t\t 1. Enter Data\n");
    printf("\t\t\t 2. Display Data\n");
    printf("\t\t\t 3. Sort using Merge Sort\n");
    printf("\t\t\t 4. Sort using Quick Sort\n");


}

int main(){
    // node *head = malloc(sizeof(node));
    node* final = NULL;
    node* use = NULL;
    
    

    asker();
    int x;
    printf("Press any key to select the function: \n");
    scanf("%d", &x);
    
    
    
    switch (x)
    {
    case 1:
        
         
         
        //  
         enterData(&use);
         
         printf("Entry done! Please run the program again to return to menu.\n");
        

        break;
    case 2:
        printer(use);
    case 3:
        merger(&use);
    // case 4:
    //     quicksort();

    default:
        break;
    }
    
    

}