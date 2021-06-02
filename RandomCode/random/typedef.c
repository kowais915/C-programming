#include <stdio.h>
#include <stdlib.h>


//using typedef to name a struct

typedef struct student{
    const char *name;
    const char *major;
    int age;
    float gpa;

} student;

//passing the struct to a function

void fun(struct student name){

    printf("The name of the student is %s, his major is %s, his age is %d, and his GPA is %f", name.name, name.major, name.age, name.gpa);

}

int main(){

student owais = {"Owais", "Computer Engineering", 20, 3.4};

//calling the function

fun(owais);

return 0;
}