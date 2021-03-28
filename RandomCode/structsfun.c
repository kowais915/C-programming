#include <stdio.h>

// Creating a new data type to group data into a single piece





struct student {
    const char *name;
    int age;
    float cgpa;

};
void funct(struct student std){
printf("Name is %s\n", std.name);
printf("Age is %d\n", std.age);
printf("GPA is %d\n", std.age);
}


int main(){

//using the new data type
struct student owais;
owais.name = "Owais";
owais.age =20;
owais.cgpa = 3.4;

funct(owais);

//calling the function
// passstructs(struct owais owais.name);

}