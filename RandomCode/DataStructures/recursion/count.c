#include <stdio.h>
#include <stdlib.h>

//this is a countdown function and demonstrates recursion

int countdown(int *n);

int main(){

    int x = 0;
    printf("Please set your number to countdown from: \n");
    scanf("%d ", &x);

    countdown(&x);
}

int countdown(int *n){
    if(*n<=0) printf("Countdown completed! \n");
    else {
        n--;
        printf("%d ", n);
        return countdown(n);
    }

    }
    
