#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//creating a struct and using typedef to shorten its name
typedef struct insert {
    char *string;
    struct insert *next;
} insert;



int main(int arga, char *argb[]) {
  
  
  
//Making sure the user inputs at least two arguments
if(arga!=2){
printf("Please provide two arguments!");
}
  
  
//Defining a pointer of type FILE
    FILE *fp;

//using the fopen function along with "r" which is a mode and stands for read
fp = fopen(argb[1], "r");

//Error Handling
if(fp == NULL){
     fprintf(stderr, "You encountered an error!");
    exit(1);
}
//maintaing two pointers i.e head for the start and current for the current
//both the pointers are NULL
insert *current =NULL;
insert *head =NULL;

//defining an array of type char
char line[200];



    

    while(fgets(line, sizeof(line), fp)){

        //dynamically allocating memory for each node
        insert *node = malloc(sizeof(insert));
        
        node->string = strdup(line); //duplicated string is stored in the string member variable of the struct
        node->next =NULL;

        if(head == NULL){
            current = node;
            head= node;
        } else {
            current = current->next;
            current->next= node;
        }
    }
    fclose(fp);
    //test print
    for(current = head; current ; current=current->next){
        printf("Data from the file has been loaded to a linkedlist\n");
        printf("%s\n", current->string);


    }
    //freeing memory

     free(fp);
     
    printf("Allocted memory in heap has been freed!\n");
    return 0;
}