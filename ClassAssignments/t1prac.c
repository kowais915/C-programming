#include <stdio.h>

int main(int arga, char* argb[]){

//defining user defined data type using struct
struct characters
{
    char arr[999];
};



struct characters lines[250];

//Defining a pointer of type FILE
FILE *anyFile;

//using the fopen function along with "r" which is a mode and stands for read
anyFile = fopen(argb[1], "r");

//defining an array of type char




while(!feof(anyFile)){

    fgets(lines.arr, sizeof(struct characters), anyFile);

   
}
int i;
for(i=0; i<sizeof(struct characters); i++){
     printf(lines[i].arr);
}
fclose(anyFile);





return 0;

}