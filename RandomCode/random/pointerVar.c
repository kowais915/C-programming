#include <stdio.h>

int main(){
    int x = 40;
    //creating a pointer variable to store the address of the variable x

    int *addofx = &x;

    // Printing the address of x
    printf("%p\n", *addofx);

    // Reading the content of address we just stored
    
    int content = *addofx;

    printf("%i\n", content);

// Since we have the address, we can go to that address and change its value.

    *addofx = 24;
    int valueChanged = *addofx;

    printf("The changed value is %i: ", valueChanged);

}