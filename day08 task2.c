//Write a C Program to compute the multiplication table of 1 - 5 using do-while

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
int a,i,x;
    i=1;
 do
 {
     printf("\n1.Table of 1");
     printf("\n2.Table of 2");
     printf("\n3.Table of 3");
     printf("\n4.Table of 4");
     printf("\n5.Table of 5");
     printf("\n6.Exit\n");
     scanf("%d", &a);
     if(a>6)
        printf("Enter a valid option!");
     else if(a<6)
     { 
         while(i<=10)
         {  x=i*a;
         printf("%d ",x);
          i++;
         }
             
     }
     
    }while(a!=6);
    
        
     
    return 0;
}
