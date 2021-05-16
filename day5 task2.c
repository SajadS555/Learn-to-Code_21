//Write a C Program to determine the factorial of a number.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

         int i,a,m;
    m=1;
    scanf("%d", &i);
    if(i>=0)
    {
        for(a=1;a<=i;a++)
    {
      m=m*a  ;
    }
    printf("%d", m);
    }
   
    else
          printf("ERROR");
    
    return 0;
}
