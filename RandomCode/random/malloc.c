#include <stdlib.h>
#include<stdio.h>

typedef struct rando{
    int x;
    int y;
} node;

int main(){


    node *pointer = malloc(sizeof(node));

    //now storing data in the structure

    pointer->x = 20;
    pointer->y=30;
    return 0;
}