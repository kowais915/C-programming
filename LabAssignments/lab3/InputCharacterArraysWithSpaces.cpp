#include<stdio.h> 
  
int main() 
{ 
    char str1[80];
	char str2[80];
	char str3[80]; 
      
    
    //only input string without space
	//scanf("%s", str1); 
     
	//method 1
	 gets(str1);
    
	//method 2
	fgets(str2,80,stdin);
    
	//method 3
	scanf("%[^\n]%*c", str3);
	
    // Printing character array,  
    printf("%s\n", str1); 
    printf("%s\n", str2); 
	printf("%s\n", str3);   
      
    return 0; 
} 
