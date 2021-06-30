#include <stdlib.h>
#include <stdio.h>
#include<string.h>
#define N 5

int queue[N];
int tail = -1;
int head = -1;



void enq(int v){


    if(tail==N-1){

        printf("Empty");
    }
    else{

        tail++;
        queue[tail];

    }
}






int main(){



    return 0;
}