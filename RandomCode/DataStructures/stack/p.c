#include <stdlib.h>
#include <stdio.h>
#define SIZE 10

int top = -1;
int stack[SIZE];

void push(int x){
if (top==SIZE-1){
    exit(-1);
}
else{
    top++;
    stack[top] =x;
}

}

//==============
void pop(){
    int ret;
    if(top==-1){
        printf("stack is emoty\n");
    }
    else{
     ret = stack[top];
     top--;
    }
    printf("The popped value is %d", ret);
    
}

//===================

int peek(){
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        printf("Element at the top is %d", stack[top]);
        return stack[top];
    }
}

//=================

void print(){
    if(top==-1){
        printf("Stack is emoty\n");

    }
    else{
        printf("\nThe elements are: ");
    
        for (int i = top; i >= 0; i--)
        {
            printf("\n%d", stack[i]);
        }
        
    }
    
}

int main(){
push(2);
push(3);
push(5);
push(6);
push(7);
push(8);
print();
printf("\n");
pop();
printf("\n");
peek();




    return 0;
}