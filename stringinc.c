#include <stdio.h>

//string in c are just arrays of type char
//If you want to pass a string to a function in c, you must do it via char arrays
void coolMessage(char* msg){

printf("Message reads %s: ", msg);
}

int main(){
int msg[] = "Hello, how are you?";

coolMessage(msg);

}
