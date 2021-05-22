//C program to print the HCF of two numbers

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i, a, b, x, hcf=1;
    scanf("%d %d", &a, &b);

    x = (a<b) ? a : b;

    for(i=1; i<=x; i++)
    {
        if(a%i==0 && b%i==0)
        {
          hcf = i;
        }
     }

printf("%d\n", hcf);

return 0;
}
