#include <stdio.h>
int main(){

    char name[5];

    printf("Enter a characeter: ");
    scanf("%3s", name);
    
    if (name[0] == 'o'){
        printf("Correct! Enter another one!\n");
         scanf("%3s", name);
    

    }
    else if(name[1]=='w'){
        printf("Correct! Enter another one!\n");
         scanf("%3s", name);
    
        
    }
    else if (name[2] == 'a'){
        printf("Correct! You are done!\n");
         
    
    }
    else{
        printf("Game Over! You did not guess the correct characters in the name");

    }


    
}