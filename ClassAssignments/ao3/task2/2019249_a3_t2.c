#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define FULL 15
#define T 1;
#define F 0;

typedef struct node{
    int dt; //data
    struct node *next;

} node;

//queue structure
// typedef struct que{
//     int ct; //counter
//     node *front;
//     node *rear;
    
// }que;



// void qint(que *q){

//     q ->ct=0;
//     q->front=NULL;
//     q->rear = NULL;
    
// }





// void enque(que *q, int val){
//     if(q->ct < FULL)
//     {
//         node *tmp;
//         tmp = malloc(sizeof(node));
//         tmp->dt = val;
//         tmp->next =NULL;
        
//         if(!mty(q))
//         {
//             q->rear->next = tmp;
//             q->rear = tmp;
//         }
//         else{
//             q->front = q->rear = tmp;

//         }
//         q->ct++;
//     }
//     else{
//         printf("Full!");
//     }
// }



node *head =NULL; //setting head and tail both to NULL

node * tail =NULL;

//printer

void printer()
{
    node *tmp = head;
    while(tmp){
        printf("%d: ", tmp->dt);
        tmp = tmp->next;
    }
    printf("NULL\n");

}

void enq(int val){
    node *new = malloc(sizeof(struct node));
    new->next =NULL;
    new ->dt = val;
    

    if (tail == NULL && head==NULL)
    {
        /* code */
        
        head = tail =new;
    }
    else{
        tail->next =new;
        tail=new;


    }
    

}




//dequeue
int dq(){
    node *tmpr;

    if(head==NULL){
        printf("Q is empty.\n");

    }
    else{
        tmpr =head;

        head = head -> next;
        if(head==NULL)
        {
            tail = NULL;
        }

        //freeing heap
        free(tmpr);
    }

}



int main(int arga, char *argb[]){


//Making sure the user inputs at least two arguments
if(arga!=2){
printf("Please provide two arguments!");
}

FILE *anyFile;
	anyFile = fopen(argb[1],"r");
	
	//error handling
	if (anyFile==NULL)
  	{
		fprintf(stderr, "Error opening file\n");
		exit(-1);
  	}
  	
  	// reading from the file
	int comcount;
	
fscanf(anyFile, "%d",&comcount); 
           
 printf("No of Commands = %d\n", comcount);


	int cmd,num,i;
    int optional_value;
    	int option = 1;
    
 	for (  i=0; i<comcount; i++){
		
		fscanf (anyFile, "%d", &cmd);
		printf("\nLine %d had cmd=%d\t", i+1, cmd);
		
	switch (cmd)
        {
            case 1:
        		printf("Enqueuing\n");
        		fscanf(anyFile, "%d", &optional_value);
        		enq(optional_value);
        	    break;
            	
	        case 2:
                printf("Dequeuing\n");
                dq();

               break;
           case 3:
                printf("Calling printer()\n");

                printer();

                break;

            case 4:
                return 0;




}
     }
}