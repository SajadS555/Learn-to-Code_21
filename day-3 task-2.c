//Write a C Program to convert Fahrenheit to Celsius.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
   float f;
   scanf("%f",&f);
   printf("%.2f",((f-32)*5)/9);
    return 0;
}
