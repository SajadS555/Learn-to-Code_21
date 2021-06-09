//Write a C program to find the second maximum element in an array of integer elements


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a[100],n,b=0,c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(a[1]>a[0])
    {
        b=a[1];
        c=a[0];
    }
    else if(a[0]>a[1])
    {
        b=a[0];
        c=a[1];
    }
    for(int i=2;i<n;i++)
    {
        if(b<a[i])
        {
            c=b;
            b=a[i];
        }
        else
            if(c<a[i] && a[i]!=b)
            {
                c=a[i];
            }
    }
    printf("%d",c);
    return 0;
}
