//Write a C Program to find the maximum and minimum from three user inputted numbers

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
int a,b,c;
    
    scanf("%d" , &a);
     scanf("%d" , &b);
     scanf("%d" , &c);
    
        if(a>b && a>c)
        printf("%d", a); 
    if(b>a && b>c)
      printf("%d", b); 
    if(c>a && c>b) 
       printf("%d", c); 
       
   
    if(a<b && a<c)
        printf("\n%d", a); 
    else if(b<a && b<c)
printf("\n%d", b); 
    else 
     printf("\n%d", c); 
   
 
  
    return 0;
}
