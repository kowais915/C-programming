#include <stdlib.h>
#include<stdio.h>
#define N 5

int main(){
    int a[N], i, j;
    printf("Enter %d numbers to save in an array: ", N);
    for(i=0; i<N; i++){
        scanf("%d", &a[i]);
    }


    //reversing the array
    for(j=N-1; j>=0;j--)
    {
        printf("%d, ", a[j]);
    }

    return 0;
}