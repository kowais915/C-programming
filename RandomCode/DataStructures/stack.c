#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>


#define ARRAY_S 4
#define EMPTY (-1)


int stack[ARRAY_S];

int top = -1;


int push(int val){
    if(top>=ARRAY_S-1){
        printf("Stack is full");
    }

    else{
        top++;
        stack[top] = val;
    }
        
}


int pop(){
    if(top==EMPTY){
        printf("The stack is empty\n");

    }

    else{
        int res = stack[top];
        
        printf("The number you popped out of the stack is %d", res);
        top--;
    }
}


int main(){
    push(1);

    push(45);
    push(12);

  
    printf("\n");
    pop();

}