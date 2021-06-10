//Write a C Program to read an array, then display the array twice. Once using the index, and the other time using the array pointer


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a[100],n;
    
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int *b=a;
    printf("DISPLAYING USING INDEX: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nDISPLAYING USING POINTERS: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*b);
            b++;
    }
   
    return 0;
}
