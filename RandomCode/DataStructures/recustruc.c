#include <stdio.h>
#include <stdlib.h>



//creating a recursive structure
typedef struct island{
const char *name;
const char *opens;
const char *closes;
//address to the next island airport
struct island *next; //note that typedef does not work here. Also, this is a pointer.

} island;


int main(){


}