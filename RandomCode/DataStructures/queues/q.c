#include <stdlib.h>
#include <stdio.h>
#define N 10

int head = -1;
int tail = -1;
int queue[N];

void enq(int v){

    if(tail==N-1){
        printf("Queue is full\n");
        exit(-1);
    }
    else{tail++;
        queue[tail] = v;
        
        printf("\nElemenet %d was inserted in the queue", v);

    }

}

//=================
void deq(){

    int del;
    if(head==-1){
        printf("Q is empty\n");
        exit(-1);
    }

    else{
        del = queue[head];
        head--;
        printf("\nThe element that was deleted from queue was: %d", del);
    }
}

int main(){

    enq(2);
    enq(5);
    enq(3);
    printf("\n");

    deq();
    deq();
}