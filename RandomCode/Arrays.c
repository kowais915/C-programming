#include <stdio.h>
#include <stdlib.h>



int main(){
//   int a[5];

//   printf("Please enter the values: \n");
//   int i;

//   for(i = 0; i< 5; i++){
//      scanf("%i", &a[i]);
//   }
// int j;
//   for (j = 0; j < 5; j++)
//   {
//      printf("The new entries of the array are: %i\n", a[j]);

//   }

// int num = 4;
// int *addofnum = &num;
// int address = *addofnum;
// printf("The address of the variable is: %p", address);

int array[5] = {1, 3, 5, 3, 2};
int i = 0;
for ( i = 0; i < 5; i++){

scanf("%d", &array[i]);
}

int j;
printf("The new elements are:  \n");
for (j=0; j<5; j++){
    printf("%d ",array[j]);

}

    /* code */



}


