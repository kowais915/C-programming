#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define CONSTA 5


int main(){
    int arr[CONSTA] ={4, 2, 1, 3, 6};
    int i = 0;
    int j = 0;

    for ( i = 0; i < CONSTA; i++)
    {
        for ( j = 0; j < CONSTA; j++)
        {
            
            //swaping
            if(arr[j]>arr[j+1]){
            int temp;
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            }
        }
        
    }
    int m;
    
    for (m = 0; m < CONSTA; m++)

    {
        printf("%d \n", arr[m]);
    }
    
    
}