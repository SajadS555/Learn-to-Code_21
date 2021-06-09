//Write a C program to find the number of words in a string. Also reverse string.


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void count(char a[1000]) 
{
 int count=0,i;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' '&&a[i+1]!=' ')
        {
            count++;
        }
    }
    printf("no of words = %d\n",count+1);
}

void reverse(char a[1000])
{
      int count=0,b,e;
    char c[1000];
    while (a[count]!='\0')
    {
      count++;
    }
   e=count-1;
    for(b=0;b<count;b++)
   {
      c[b]=a[e];
      e--;
   }

   c[b]='\0';
    printf("%s",c);
}
int main()
{
    char a[100];
    gets(a);
    count(a);
    reverse(a);
    return 0;
}
