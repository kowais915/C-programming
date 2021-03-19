#include <stdio.h>
#include <stdlib.h>

typedef struct reptiles{
const char *name;
int age;
} reptiles;


void bd(reptiles *animal){
    (*animal).age = (*animal).age +1;
    printf("Happy birthday! You are now: %d", (*animal).age);


}

int main(){
reptiles turtle;

turtle.age = 45;
bd(&turtle);

}