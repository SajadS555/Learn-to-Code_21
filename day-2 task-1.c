#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
   float n,b;
    int s,m,p;
    float d;
   scanf("%f%f",&n,&b);
   s=n+b;
   m=n-b;
   p=n*b;
   d=n/b;
   
   printf("%d\n%d\n%d\n%.2f",s,m,p,d);
   return 0;
    
    
}
