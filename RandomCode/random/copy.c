#include <stdio.h>
#include<stdlib.h>
#define SIZE 10



int arr1[SIZE] = {3,4,2,5,2,3,2,4,2,6};
int arr2[SIZE] = {3,6,7,8,9,7,5,4,3,2};

//copy arr1 into arr2

int main(){
int i, j;

for(i=0; i<SIZE; i++){
    arr2[i]=arr1[i];
}

for(j=0; j<SIZE;j++){
    printf("%d\n",arr2[j]);
}

    return 0;
}