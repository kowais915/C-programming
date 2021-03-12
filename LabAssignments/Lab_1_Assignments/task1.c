#include <stdio.h>
int main(){
    int userArray[6];
    printf("Enter values for the array: \n");
    int i;
    for(i = 0; i<6; i++){
    scanf("%i", &userArray[i]);
    }


    printf("Display Array: \n");
    int j;
    for(j = 0; j<6; j++){
      printf("%d ", userArray[j]);
    }
}
