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

void reverse(student *star){
student *temp0 = star;
student *temp = star;

while (temp->next!=NULL)
{
    temp = temp->next;
    // printf("Name: %s\n Reg: %d\n", temp->name, temp->reg);
}

//got the address of the last struct
student *last = temp;


while (temp->next!=NULL)
{
    temp->next =temp->next->next;
   
}

if (temp ==NULL)
{
    printf("Reversed!\n");
}
else{
    printf("Name: %s\n Reg: %d\n", temp->name, temp->reg);
}
//now we will traverse back to the starting struct using temp0

//this loop will get us back to the starting struct
//while it is traversing, we want to point the address of each struct to the next one
while (last->next!=temp0->next){
    printf("Name: %s\n Reg: %d\n", last->name, last->reg);
last->next = last->next-1;
}


// while (last!=star)
// {
//      printf("Name: %s\n  Reg: %d\n",last->name, last->reg);
// }
//  printf("Name: %s\n  Reg: %d\n",last->name, last->reg);




 }

int main(){


struct student *head;
student owais, saad, haseeb, ammad;
owais.name ="Owais";
owais.reg =2019249;
owais.next = NULL;


saad.name = "Saad";
saad.reg = 2019359;
saad.next = NULL;

haseeb.name ="Haseeb";
haseeb.reg = 2019236;
haseeb.next = NULL;

ammad.name ="Ammad";
ammad.reg = 2019295;
ammad.next = NULL;
// linking

head = &owais;
owais.next =&saad;
saad.next = &haseeb;
haseeb.next =&ammad;



// travel(head);

reverse(head);

}