#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>

#define ARRAY_SIZE 6
#define EMPTY -1


int stack [ARRAY_SIZE];

//keeping track of the stack

int top0 = EMPTY;

int top1 = ARRAY_SIZE;


//push function 
void push1(int val){
    if(top0 < top1-1){
      
        top0++;
       stack[top0]=val;
    }
    else{
     printf("Stacks are full!");
    }
}
//push 2
void push2(int val){
    if(top0 < top1-1){
      
       top1--;
       stack[top1]=val;
    }
    else{
      printf("Stacks are full!");
    }
}

//pop functions

int pop1(){

if(top0 == EMPTY){
    printf("Stack is empty!");
}
else{

    int result1 = stack[top0];
    top0--;
    printf("you popped: %d", result1);
}

// if(top0>=0){
//     int result = stack[top1];
//     top1--;
// }
// else{
//     printf("Stack Empty");
// }

}

int pop2(){
    if(top1<ARRAY_SIZE){
       
        int result2 = stack[top1];
        top1++;
        printf("You popped: %d", result2);
    }

    else{
        printf("Stack is empty!");
    }
}

//printers
void printer1(){
    int i;
    for(i=0; i>=0; --i){
        printf("%d", stack[i]);
    }
    printf("\n");
}

void printer2(){
    int j;
    for(j=0; j<ARRAY_SIZE; ++j){
        printf("%d", stack[j]);
    }
    printf("\n");
}



// bool push(int val){

//  if(top >=ARRAY_SIZE-1){
//      printf("The stack is full\n");
//  }
// else{

//  top++;
//  stack[top] = val;
//  return true;

//  }

 

// }

// int pop(){
//     if(top==EMPTY){
//         printf("The stack is empty!\n");
//     }
//     else{
//         int result = stack[top];
//         printf("The number that was popped is: %d", result);
//         top--;
//     }
// }

//main function
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


	int cmd,optional_value,i, stack_id;
    	int option = 1;
    
 	for (  i=0; i<comcount; i++){
		
		fscanf (anyFile, "%d", &cmd);
		printf("\nLine %d had cmd=%d\t", i+1, cmd);
        fscanf(anyFile, "%d", &stack_id);
        printf("Stack_id is: %d ", i+2, stack_id);
		
	switch (cmd)
        {
            case 1:
                //stack_id detection
                if(stack_id==1){
        		printf("Calling Push on Stack 1\n");
        		fscanf(anyFile, "%d", &optional_value); 
        		push1(optional_value);
                }
                else if(stack_id==2){
                printf("Calling Push on Stack 2\n");
        		fscanf(anyFile, "%d", &optional_value);
        		push2(optional_value);

                }
                else{
                    printf("Wrong command in the file. \n");
                    exit(-1);
                }

        	    break;
	
	        case 2:
                if(stack_id==1){
                printf("Calling pop1() on stack 1\n");
                pop1();
                }
                else if(stack_id==2){
                printf("Calling pop2() on stack 2\n");
                pop2();
                }
                else{
                    printf("Wrong command found in your txt file.\n");
                    exit(-1);
                }

               break;
           case 3:

                if(stack_id==1){
                printf("Calling printer1()\n");

                printer1();
                }
                else if(stack_id==2){
                printf("Calling printer2()\n");

                printer2();

                }

                break;


// testing


// push1(23);
// push1(342);
// push1(32);
// push2(13);
// push1(43);
// pop1();
// printf("\n");
// pop1();
// printf("\n");
// pop2();
// printf("\n");
// pop2();

}
     }
}