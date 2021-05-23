//Write a C program to print the above series starting from 0 and the upperlimit is determined by the user

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,result,N,i; 
    scanf("%d", &N);
    a=0;
    b=1;
    for(i=1;i<=N;i++)
    {
        printf("%d ",a);
        result=a+b;
        a=b;
        b=result;
    }
    return 0;
    
}
