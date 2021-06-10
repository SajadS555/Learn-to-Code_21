//Write a C program to find the number of prime numbers in a array of integers

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a[100],n,x,prime=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
          x=0;
        for(int j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                x=1;
            }
          
        }
        if(x!=1)
        {
            prime++;
        }
    }
        printf("%d",prime);
    
    return 0;
}
