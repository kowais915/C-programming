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

//exiter
void exi(){
    exit(-1);
}

//new node pusher; needs to be passed the address of the head node.
void enterData(node** head){
 
  printf("How many entries do you have?\n");
  int entries;
        
  scanf("%d", &entries);
  printf("Got it! Please enter your data now: \n");
  int i;
  int userinput;
  
  for(i=0; i<entries; i++){
    node *new = malloc(sizeof(node));
      scanf("%d", new->data);
       new->next = (*head);
       (*head) = new;
  }

 

}

//printer
// void printer(node* ptr){
//     while (ptr != NULL)
//     {
//         /* code */
//         printf("%d ", ptr->data);
//         ptr = ptr ->next;
//     }
    
//     printf("\n");

// }




void displayList(node* head)
{
    struct node *p = head; 

    if(p== NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        
        while(p!= NULL)
        {
            printf(" Data = %d\n", p->data);       // prints the data of current node
            p = p->next;                     // advances the position of current node
        }
    }
} 
//printer ends

//inserter
//==============================================================================================================================
node * createNodeList(int n)
{
    struct node *head, *tmp, *p;
    int i = 0;
  
  for ( i = 0; i < n; i++)
  {
      tmp = (node*)malloc(sizeof(node));
      printf("Enter the data for node %d: ", i+1);
      scanf("%d", &(tmp->data));
      tmp->next = NULL;
  }
      
      if (head==NULL)
      {
          /* code */
          head = tmp;
      }
      else
      {
          p =head;
          while (p->next!=NULL)
          {
              /* code */
              p = p->next;
              p->next = tmp;

          }
          
          
      



  }
  

      return head;  
}
    




//=============================================================================================
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
    printf("\t\t\t 5. Exit\n");


}

int main(){
    // node *head = malloc(sizeof(node));
    node* final = NULL;
    node* use = NULL;
    int n;
    
    
    
    asker();
    int x;
    printf("Press any key to select the function: \n");
    scanf("%d", &x);
    
    
    
    switch (x)
    {
    case 1:
        
       
	
		
        printf(" Input the number of nodes : ");
        scanf("%d", &n);
         
        //  
        //  enterData(&use);
    
        
        createNodeList(n);
        node *head = createNodeList(n);
         
        //  printf("Entry done! Please run the program again to return to menu.\n");
        

        break;
    case 2:
        // printer(use);

        displayList(head);
    case 3:
        merger(&use);
    // case 4:
    //     quicksort();
    case 5: 
     exi();
    break;
    default:
        break;
    }
    
    

}