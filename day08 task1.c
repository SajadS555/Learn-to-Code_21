//Write a C Program to identify if a number is a palindrome or not

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int a,x,y,r;
    scanf("%d", &a);
    x=a;
    y=0;
    while(x!=0)
    {
        r=x%10;
        y=y*10+r;
        x=x/10;
    }
    
   if(y==a)
       printf("Yes");
    else
        printf("No");
    
    return 0;
}
