//Write a C program to find the factorial of a given number using a recursive function


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()  
  {
      int n,a;
      scanf("%d",&n);
      if(n<0){
          printf("ERROR");
      }
       else
       {
            a=factorial(n);
            printf("%d",a);
       }
   }

    int factorial(int n)
    {
        int a;
        if(n==0)
            a=1;
        else
            a=n*factorial(n-1);
        return a;
    }
