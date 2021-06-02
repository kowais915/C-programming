#include<stdio.h>
#define FREEZING_POINT 32.0
#define SCALE 5/9

int main(){
    float farn;

printf("Enter the value of tempertaure in farnheight: ");
scanf("%d", &farn);

float result = (farn - FREEZING_POINT)*SCALE;
printf("The temprature in Celsius is: %f", result);





    return 0;
}