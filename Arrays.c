#include <stdio.h>
int j = 0;
int main(){
   int a[5] = {1, 2, 3 ,4 ,5};
   for(int i = 0; i < 5; i++)
   {
       scanf("%d", &a[i]);
   }
printf("The numbers in the Array are changed to: %d\n", a[j]);
for(j = 0; j<5; j++){
printf("%d", a[j]);
   }

}
