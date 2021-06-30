#include <stdio.h>
#include <stdlib.h>
#include <string.h>




void exch(int *x, int *y){

    int t = *x;
    *x = *y;
    *y = t;
}

//for printing

void print(int array[], int s)
{
    int i;
    for (i = 0; i < s; i++)
    {
        /* code */
        printf("%d\n", array[i]);
    }
    
}

void sort(int array[], int num)
{
    int m;
    int n;
    for ( m = 0; m < num-1; m++)
    {
        /* code */
         
         for (n = 0; n < num - m -1; n++)
         {
             /* code */

             if (array[n]>array[n+1])
             {
                 exch(&array[n], &array[n+1]);
             }
             



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
        		printf("Calling the Sort Function: \n");
        		fscanf(fp, "%d", &num);
        		//calling the sort function
                // sort()

        	break;
	
	case 2:
            	printf("Calling DeQueue....");
		       
            break;
	case 3:
			     printf("Calling display...\n");
            	
            break;
	case 4:
            	return 0;
        }
	}





}