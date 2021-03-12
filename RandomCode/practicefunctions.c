#include <stdio.h>
int sum(int *x, int *y){
    int sum = 0;
    sum = *x + *y;

}
int main(){
    int num1 = 2;
    int num2 = 5;
    int answer = 0;
    answer = sum(&num1, &num2);
printf("The two numbers add to %i", answer);
}