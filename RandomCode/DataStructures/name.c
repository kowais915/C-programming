#include <stdio.h>
#include <stdlib.h>

typedef struct students{

    const char *name;
    int age;
    struct students *next;
} student;

void travel(student *start){
    student *i = start;
    while (i!=NULL)
    {
        printf("Name: %s\nAge: %d\n", i->name, i->age);
        i = i->next;

    }
    printf("\n");

}


int main(){

    student owais = {"Owais", 20, NULL};
    student saad = {"Saad", 20, NULL};
    student haseeb = {"Haseeb", 22, NULL};
    student ammad = {"Ammad", 24, NULL};


owais.next = &saad;
saad.next = &haseeb;
haseeb.next = &ammad;
ammad.next = NULL;

travel(&owais);





}