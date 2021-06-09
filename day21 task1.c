//Write a C program to count and display the number of Vowels, Consonants and spaces in a string

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int b,c,d;
    b=c=d=0;
    char a[200];
    gets(a);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
        {
            b++;
        }
        else if(a[i]==' ')
        {
            d++;
        }
        else 
        {
            c++;
        }
    }
    printf("%d\n%d\n%d",b,c,d);
    return 0;
} 
