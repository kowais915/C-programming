#include <stdio.h>
#include <stdlib.h>

typedef struct student{

    const char *name;
    const char *major;
    float cgpa;

    struct student *next;
} student;

void change(student *std){

    (*std).cgpa = 3.8;
    printf("Your CGPA is: %f", (*std).cgpa);
}
int main(){

student owais = {"Owais", "Computer Engineering", 3.4};

student saad = {"Saad", "Computer Engineering", 3.2};

student haseeb = {"Haseeb", "Computer Engineering", 3.2};

student ammad = {"Ammad", "Computer Engineering", 3.2};

// owais.next = &saad;
// saad.next = &ammad;
// ammad.next = &haseeb;

// printf("The students in the CE class are: %s, %s, %s, %s, ", owais.name, saad.name, haseeb.name, ammad.name);


change(&saad);


}