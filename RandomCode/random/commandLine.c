#include <stdio.h>

// int main( int argc, char *arg[]){
    
//     if (argc == 1)
//     {
//         printf("Please provide at least two command line arguments");
//     }
    
    
// FILE *f = fopen(arg[1], "r");
    
// }
int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf( "usage: %s filename", argv[0] );
        return 0; //should be two arguments, exe name & file path/name
    }
    //if Windows:
    if(GetFileAttributes(argv[1]) != 0xffffffff) //file exists
    {
        //do something with file;
        FILE *file = fopen( argv[1], "r" );
        // and so on...
    }
    //if Linux:
    if (0 == access(path, 0))//file exists
    { 
        //do something with file;
        FILE *file = fopen( argv[1], "r" );
        // and so on...

    } 

    return 0;
}