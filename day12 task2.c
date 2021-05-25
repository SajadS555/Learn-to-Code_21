//Write a C program to find the frequency of odd and even numbers in the 1D array.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a[100],n,i,b=0,c =0;
    scanf("%d\n",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d\n",&a[i]);
    }
    for(i=0; i<n; i++){
        if(a[i] %2==0)
            b=b+1;
        else if (a[i] %2 !=0)
            c=c+1;
    }
    printf("%d\n",b);
    printf("%d\n",c);
    
   
    return 0;
}
