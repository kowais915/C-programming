#include <stdio.h>
#include<stdio.h>
#define N 10

int main(){

    int arr[N] = {0}, n, reminder;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n>0){
        reminder = n%10;
        if(arr[reminder]==1){
            break;
        }
        else{
            arr[reminder]=1;
        }
        n=n/10;
    }
    if(n){
        printf("Repetion detected.");
    }
    else{
        printf("No reptetion");
    }



}