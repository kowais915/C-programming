#include <stdio.h>
#include <stdlib.h>
#define SIZE 50;

//defining global var

// int arr[SIZE];
int arr[50];
int front, tail;
front = -1;
tail = -1;


// typedef struct queue
// {
//     int array[SIZE];
//     int front;
//     int tail;
    
// } queue;

//a functions that insert data into the queue

// void enqueue (queue*s int val){

// }


void enqueue(){
    int ins;
    if(tail == 50 - 1)
    {
        printf("Full!");
    }
    else
    {
       if (front == -1)
       {
           /* code */
           front = 0;
           printf("insert: ");
           scanf("%d", &ins);
           tail = tail + 1;
           arr[50] = ins;

       }
         
    }
}

void dequeue()
{
   if (front == -1 || front > tail)
   {
       /* code */
       printf("Full!");
       
   }
   else
   {
       printf("Success! Element %d Deleted!", arr[front]);
       front = front + 1;
   }






}


void display()
{

int m = 0;
if (front == -1)
{
    printf("Whoops! Queue is Empty!");
}
else
{
    printf("Queue contains: \n");
    for (m = front; m <= tail; m++)
    {
        /* code */
        printf("%d ", arr[m]);
        printf("\n");
    }
    
}




}

int main(int arga, char *argb[]){
    
//creating .txt file
	FILE *fp;
	fp = fopen("FileT1.txt","r");
	
	//check for successful file creation/opened
	if (fp==NULL)
  	{
		fprintf(stderr, "Error opening file\n");
		exit(-1);
  	}
  	
  	// reading from the file
	int cmdCount;
	
fscanf(fp, "%d",&cmdCount); 
            //doesn't read spaces only read one word at a time from a text file
   	
 printf("NoOfCommands=%d\n", cmdCount);
	printf (".......QUEUE OPERATION........\n");

	int choice,cmd,num,i;
    	int option = 1;
    
 	for (  i=0; i<cmdCount; i++){
		// data format is known so we read in that order
		fscanf (fp, "%d", &cmd);
		printf("\nLine %d had cmd=%d\t", i+1, cmd);
		
	switch (cmd)
        {
        	case 1:
        		printf("Calling EnQueue....");
        		fscanf(fp, "%d", &num);
        		enqueue(num);
        	break;
	
	case 2:
            	printf("Calling DeQueue....");
		        dequeue();
            break;
	case 3:
			     printf("Calling display...\n");
            	display();
            break;
	case 4:
            	return 0;
        }
	}





}