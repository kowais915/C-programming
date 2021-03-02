#include <stdio.h>

int main(){
    int x = 40;
    //creating a pointer variable to store the address of the variable x

    int *addofx = &x;

    // Printing the address of x
    printf("%p", *addofx);
}