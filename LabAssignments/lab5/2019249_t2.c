#include <stdio.h>
#include <stdio.h>

//creating structure to store elements
typedef struct node{
    int data;
    struct node *next;
} node;



typedef queue
{
    /* data */
    
};




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