// This program accesses the address of a variable where a value is stored.

#include <stdio.h>

int main(){
    int x = 1;
    //printing the address of the stored data
    
    printf("The address of the variable is %p: ", &x);
    
}