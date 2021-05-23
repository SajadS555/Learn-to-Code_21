//Write a C program to print the following number pattern

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,i,j,h,g;
    g=1;
    scanf("%d",&a);
    for(i=a;i>0;i--)
     {             
        for(j=i;j>0;j--)      
         printf("%d", i); 
     
      printf("\n");
        
         for(h=0;h<g;h++)
      printf(" "); 
        g++;
      }

    
    return 0;
}
