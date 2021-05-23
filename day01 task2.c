//Write a C Program to perform Read and Print operations using the four basic data types in C. (int, float, char & double)

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a;
    char b;
    float c;
    double d;
    scanf("%c%d%f%lf",&b,&a,&c,&d);
    printf("%c\n%d\n%f\n%lf\n",b,a,c,d);
    return 0;
}
