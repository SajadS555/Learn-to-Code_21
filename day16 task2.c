//Write a C program to find the minimum and maximum element of an array.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a[100],i,j,x,n;
    scanf("%d\n",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d ",&a[i]);
    } 
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                x=a[j];
                a[j]=a[j+1];
                a[j+1]=x;
            }
        }
    }
    printf("%d\n",a[0]);
    printf("%d",a[n-1]);
    return 0;
}
