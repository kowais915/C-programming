#include <stddef.h>

int square_sum(const int *values, size_t count)
{
  const int *arr= values;
  int n = count;

  int i;
  int sum = 0;
  int temp;
  
  for(i=0; i<n; i++)
  {
   
    temp = *(arr+i);
    sum = sum + temp*temp;
    
    
    
  }
  return sum;
}