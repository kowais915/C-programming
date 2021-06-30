#include <string.h>
#include<stdio.h>
#include <stdlib.h>
#define N 5

int stack[N];
int top =-1;

void push(int n){
if(top==N-1){

    printf("Overflow");

}
else{
top++;
stack[top] = n;

}

}

//printer
void printer(){

    int i;
    for( i = 0; i<N; i++){
        printf("%d", stack[i]);
        printf("\n");
    }
}



int main(){

push(2);
push(3);
push(5);

printer();
    return 0;
}