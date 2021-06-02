#include <stdio.h>
#include <stdlib.h>

typedef struct student{
    const char *name;
    const char *major;
    int reg;
    struct student *next;

} student;

void traverse_reverse(student *end){
    student *i = end;
    for(; i!=NULL; i->next){
        printf("Name: %s\n Major:%s \n Reg: %d\n", i->name, i->major, i->reg);
    }
}

int main(){

student owais = {"Owais", "Computer Engineering", 2019249, NULL};

student saad = {"Saad", "Computer Engineering", 2019249, NULL};

student haseeb = {"Haseeb", "Computer Engineering", 2019249, NULL};

student ammad = {"ammad", "Computer Engineering", 2019249, NULL};


owais.next = &saad;
saad.next = &haseeb;
haseeb.next = &ammad;

traverse_reverse(&owais);



}