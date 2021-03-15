#include <stdio.h>

int main( int argc, char *arg[]){
    
    if (argc == 1)
    {
        printf("Please provide at least two command line arguments");
    }
    
    
    int i;
    for (i = 0; i < argc; i++)
    {
    printf("%s \n", arg[i]);
    }
    
}