//Write a C program to check whether a given number is amstrong or not.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void amstrong(int a)
{
    int i,b,c=0;
    for(i=a;i!=0;i/=10)
    {
        b=i%10;
        c+=b*b*b;
    }
    if(c==a)
    {
        printf("Amstrong");
    }
    else 
    {
        printf("Not Amstrong");
    }
        
}
int main()
{
    int a;
    scanf("%d",&a);
    amstrong(a);
    return 0;
}
