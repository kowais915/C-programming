#include <stdio.h>

// int f(int n){
//    if (n==1)
//    {
//        /* code */
//        printf("hello");
//        return 1;
//    }
//    else{
//        return n*f(n-1);
//    }
   
// }



int factorial(int n){

    if (n==01)
    {
        printf("Factorial is at its end!\n");
        return 1;
    }
    else{

      return  n*factorial(n-1);
    }
    
}
int main(){
    printf("%d\n", factorial(3));

} 