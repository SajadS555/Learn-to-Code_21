//Write a C program to change the case of alphabets.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char a[100];
    gets(a);
    for(int i=0;a[i]!='\0';i++)
    {
        if((a[i]>='a') && (a[i]<='z'))
            a[i]=a[i]-32;
        else if(a[i]<='z' && a[i]>='A')
        a[i]=a[i]+32;
        
        
    }
    puts(a);
    return 0;
}
