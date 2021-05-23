//Write a C Program to determine the area of a square, circle and a triangle taking length, radius and base and height respectively from user input.


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int l;
    float r,b,h;
    scanf("%d",&l);
    printf("%d",l*l);
    scanf("%f",&r);
    printf("\n%.1f",3.14*r*r);
    scanf("%f%f",&b,&h);
    printf("\n%.2f",0.5*b*h);
    return 0;
}
