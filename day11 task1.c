//Write a C program to read n values from the user and store it in the array. Reprint the values stored in the array and also print the value of second element in the array.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a[100],n,i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Entered array: ");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n%d",a[1]);
    return 0;
}
