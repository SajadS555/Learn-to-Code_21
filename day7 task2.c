//Write a C Program to display a calculator with a menu consisting of each operation to perform on the numbers using Switch Case statement.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int x,a,y;
float b,z;
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d", &x);
    scanf("%d", &a);
    scanf("%f", &b);
    switch(x)
    {
            case 1: y=a+b;
            printf("%d", y);
            break;
            case 2: y=a-b;
            printf("%d", y);
            break;
            case 3: y=a*b;
            printf("%d", y);
            break;
            case 4: 
            if(b!=0)
            {
                z=a/b;
            printf("%.1f", z);
            break;
            }
            else
                printf("Cannot be determined");
            
    }
      
    return 0;
}
