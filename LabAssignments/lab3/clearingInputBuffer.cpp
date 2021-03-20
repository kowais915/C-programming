#include<stdio.h> 
  
int main() 
{ 
    char str[80], ch; 
      
    // scan input from user -  
    // GeeksforGeeks for example 
    scanf("%s", str); 
      
    // flushes the standard input 
    // (clears the input buffer) 
    while ((getchar()) != '\n'); 
      		//OR
	  fflush(stdin); 
    // scan character from user -  
    // 'a' for example 
    ch = getchar(); 
      
    // Printing character array,  
    // prints “GeeksforGeeks”) 
    printf("%s\n", str); 
      
    // Printing character a: It  
    // will print 'a' this time 
    printf("%c", ch); 
  
    return 0; 
} 
