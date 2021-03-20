#include <stdio.h>
#include <stdlib.h>

// typedef struct reptiles{
// const char *name;
// int age;
// } reptiles;


// void bd(reptiles *animal){
//     (*animal).age = (*animal).age +1;
//     printf("Happy birthday! You are now: %d", (*animal).age);


// }


typedef struct student {
const char *name;
int reg;
int age;
float gpa;
} students;


//the happy birthday function
void bd(students *std){
(*std).age = (*std).age + 1;
printf("Happy Birthday, Owais! You are now: %d", (*std).age);
}

int main(){
// reptiles turtle;

// turtle.age = 45;
// bd(&turtle);

// student owais = {"Owais", 2019249, 20, 3.4 };

students owais;
owais.age = 20;
//calling the happy birthday functions
bd(&owais);

}