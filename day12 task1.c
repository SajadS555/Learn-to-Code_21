//Write a C program to check whether a number present in the 1D array or not.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a[100],n,b,i,c=0;
    scanf("%d\n",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d\n",&a[i]);
    }
    scanf("%d\n",&b);
    for(i=0; i<n; i++)
    {
        if(a[i]==b)
        {
            c=1;
        }
    }
    if(c==1)
    {
            printf("%d is present in this array",b);
    }       
    else 
    {
        printf("%d is not present in this array",b);

    }
    
    return 0;
}
