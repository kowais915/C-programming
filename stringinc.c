#include <stdio.h>

//string in c are just arrays of type char
//If you want to pass a string to a function in c, you must do it via char arrays

void message(char msg[]){
    printf("The message reads: %s", msg);

}
int main(){
char greetings[] = "Eid Mubarak!";
message(greetings);
}