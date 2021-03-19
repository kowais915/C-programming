#include <stdio.h>
#include <stdlib.h>



int main(int arg1, char* arg2[]){


//Making sure the user inputs at least two arguments
if(arg1==1){
printf("Please provide two arguments!");
}


//Defining a pointer of type FILE
FILE *fileptr;

//using the fopen function along with "r" which is a mode and stands for read
fileptr = fopen(arg2[1], "r");

//Error Handling
if(fileptr == NULL){
  fprintf(stderr, "You encountered an error!");
    exit(1);
}



//dynamically allocating memory in heap
char *charptr = (char*)malloc(300 * sizeof(char)); 

//in case of an error
if (charptr == NULL){
    printf(" Error! Memory not allocated!");
    exit(0);
}

int input;
printf("How many lines do you want to read randomly?");
//taking user input to display random lines

scanf("%d", &input);

// int i;
// for(i = 0; i< input; i++){

//using a special function called fseek
fseek(fileptr, input,  SEEK_SET); //seek_set means start at the begining of file.

printf("%s", fileptr);
// fread(&input, sizeof(int)*20, 4,  fileptr);

// while(!feof(fileptr)){

//     fgets(charptr, 300, fileptr);
//     printf(charptr);


// }

fclose(fileptr);

return 0;


}