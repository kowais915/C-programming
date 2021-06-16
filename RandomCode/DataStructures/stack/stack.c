#include<stdio.h>
#include<stdlib.h>
#define N 20

int stack[N];
int top=-1;


void push(int val){

    if(top==N-1){
        printf("Stack is full");
        exit(-1);
    }
    else{
        top++;
        stack[top]=val;

        printf("The pushed value is %d", val);
    }
}


//============

void pop(){

    int res;
    if (top==-1)
    {
        printf("The stack is empty\n");
        exit(-1);
    }
    else{
        res =stack[top];
        top--;
        printf("The popped value is %d", res);
    }
    
}

//==================


void peek(){
    if(top==-1){
        printf("The stack is empty\n");
        exit(-1);
    }
    else{
        printf("Element at the top is: %d", stack[top]);
    }
}

//================


void print(){
    if(top==-1){
        printf("The stack is empty\n");


    }
    else{
       for(int i=top; i>=0;i--){
           printf("\n%d",stack[i]);
       } 
    }

}


int main(){
   push(1);
   push(2);
   push(3);
   push(22);
   push(33);
   push(21);
   push(35);

   printf("\n");

   pop();
   printf("\n");
   peek();
   printf("\n");
   print();

    return 0;

}