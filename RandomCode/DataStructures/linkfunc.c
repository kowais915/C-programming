#include <stdio.h>
#include <stdlib.h>

typedef struct student{

    const char *name;
    const char *major;
    float cgpa;

    struct student *next;
} student;
int main(){

student owais = {"Owais", "Computer Engineering", 3.4};

student saad = {"Saad", "Computer Engineering", 3.2};

student haseeb = {"Haseeb", "Computer Engineering", 3.2};

student ammad = {"Ammad", "Computer Engineering", 3.2};

owais.next = &saad;
saad.next = &ammad;
ammad.next = &haseeb;

printf("The students in the CE class are: %s, %s, %s, %s, ", owais.name, saad.name, haseeb.name, ammad.name);


}