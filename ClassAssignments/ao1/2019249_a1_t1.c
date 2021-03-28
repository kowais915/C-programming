#include <stdio.h>
#include <stdlib.h>



int main(int arga, char* argb[]){


//Making sure the user inputs at least two arguments
if(arga!=2){
printf("Please provide two arguments!");
}


//Defining a pointer of type FILE
FILE *anyFile;

//using the fopen function along with "r" which is a mode and stands for read
anyFile = fopen(argb[1], "r");

//Error Handling
if(anyFile == NULL){
     fprintf(stderr, "You encountered an error!");
    exit(1);
}



//dynamically allocating memory in heap
char *ptr = (char*)malloc(200 * sizeof(char)); 

//in case of an error
if (ptr == NULL){
    printf(" Error! Memory not allocated!");
    exit(0);
}

//reading the file until the end
while(!feof(anyFile)){

    fgets(ptr, 200, anyFile);
    printf(ptr);


}

fclose(anyFile);



//freeing the allocated memory
free(ptr);

return 0;
}