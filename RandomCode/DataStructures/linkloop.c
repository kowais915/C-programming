#include <stdio.h>
#include <stdlib.h>

typedef struct student{

    const char *name;
    const char *major;
    float cgpa;

    struct student *next;
} student;

// void change(student *std){

//     std->cgpa = 3.8;
//     printf("Your CGPA is: %f", std->cgpa);
// }


//traversing function

void traverse(student *std){

    student *i = std;

    for(; i!=NULL; i++){
        printf("Name: %s\n Major: %s\n, CGPA: %f\n ", i->name, i->major, i->cgpa);
    }
}
int main(){

student owais = {"Owais", "Computer Engineering", 3.4, NULL};

student saad = {"Saad", "Computer Engineering", 3.2, NULL};

student haseeb = {"Haseeb", "Computer Engineering", 3.2, NULL};

student ammad = {"Ammad", "Computer Engineering", 3.2, NULL};

owais.next = &saad;
saad.next = &ammad;
ammad.next = &haseeb;



traverse(&saad);
// change(&saad);


}