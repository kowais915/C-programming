#include <stdio.h>
#include <stdlib.h>

typedef struct student{
const char *name;
const char *major;
struct student *next;
} students;




int main(){

students owais = {"Owais", "Computer Engineering"};

printf("The student name is %s and his major is %s", owais.name, owais.major);



    return 0;
}