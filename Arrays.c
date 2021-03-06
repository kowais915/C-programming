#include <stdio.h>
#include <stdlib.h>



int main(){
  int a[5];

  printf("Please enter the values: \n");
  int i;

  for(i = 0; i< 5; i++){
     scanf("%i", &a[i]);
  }
int j;
  for (j = 0; j < 5; j++)
  {
     printf("The new entries of the array are: %i\n", a[j]);

  }


}


