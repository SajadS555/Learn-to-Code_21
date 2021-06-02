//Write a C program to print inverted full pyramid of *

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
   int i,k,a;
 scanf("%d",&a);

    if(a<1)
    {
       printf("ERROR");
    }
    else
    {
        for(i=1;i<=a;i++)
        {  
            for(k=1; k<i; k++)
            {
                printf("  ");
            }
            for(k=1;k<=(a*2-((2*i)-1)); k++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    
        return 0;
}
