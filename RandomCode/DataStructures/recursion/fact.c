#include <stdlib.h>
#include <stdio.h>

int fact(int n){
    if (n==0)
    {
        return 1;
    }
    else{
        return n = n*fact(n-1);
    }
    
}

int main(){
    int x =0;

    printf("Please enter a number to calculate the factorial: \n");
    scanf("%d ", &x);

    fact(x);
}

