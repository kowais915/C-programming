#include <stdlib.h>
#include <stdio.h>

//creating a recursive structure

typedef struct island{
 const char *name;
 const char *opens;
 const char *closes;
 struct island *next;

} island;




//traversing through the list

void travel(island *start){
island *i =start;

for(; i!=  NULL; i->next );
printf("Name: %s, Opens; %s", i->name, i->opens);
}

int main(){


// suing the structure

island amity = {"Amity", "10:00", "11:00", NULL};
island craggy = {"Craggy", "10:00", "11:00", NULL};
island isla_nubla = {"Nublar", "10:00", "11:00", NULL};
island shutter = {"shutter", "10:00", "11:00", NULL};

//Alert! you are going to skull island from isla Nubla, instead of going to shutter

island skull = {"Skull Island", "10:00", "11:00", NULL};



//linking the island together

amity.next = &craggy;
craggy.next = &isla_nubla;
isla_nubla.next = &skull;
skull.next =&shutter;


travel(&amity);




    return 0;
}