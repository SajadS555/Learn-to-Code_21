//Write a program in C to Find the Frequency of Characters.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char a[100],b;
    int n;
        gets(a);
    scanf("%c",&b);
    for(int i=0;a[i]!='\0';i++)
    {
        if(b==a[i])
           n = n+1;
    }
    printf("%d",n);
    return 0;
}
