#include <stdio.h>

// Creating a new data type to group data into a single piece



// void passstructs(struct student std){
// printf("%s, %d, %f ", std.name, std.age, std.cgpa);
// }


struct student {
    const char *name;
    int age;
    float cgpa;

};

int main(){

//using the new data type
struct student owais = {"Owais", 20, 3.4};
//calling the function
// passstructs(struct owais owais.name);


printf("The name of the student is %s, his age is %d, and his GPA is %f", owais.name, owais.age, owais.cgpa);
}