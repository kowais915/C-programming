#include <stdio.h>
#include <stdlib.h>

typedef struct student{

const char *name;
int reg;

struct student *next;


}student;

void travel(student *start){
    student *i = start;

    while (i!=NULL)
    {
        printf("Name: %s\n  Reg: %d\n", i->name, i->reg);
        i = i->next;
    }
     
}

int main(){


struct student *head;
student owais, saad, haseeb;
owais.name ="Owais";
owais.reg =2019249;
owais.next = NULL;

saad.name = "Saad";
saad.reg = 2019359;
saad.next = NULL;

haseeb.name ="Haseeb";
haseeb.reg = 2019236;
haseeb.next = NULL;

// linking

head = &owais;
owais.next =&saad;
saad.next = &haseeb;
haseeb.next = NULL;


travel(head);


}