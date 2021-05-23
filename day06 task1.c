//WACP to accept marks of three subjects.. Calculate the percentage and respective grade according to following: Percentage >= 90% : Grade A Percentage >= 80% : Grade B Percentage >= 70% : Grade C Percentage >= 60% : Grade D Percentage >= 40% : Grade E Percentage < 40% : Grade F

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
    {
        int a,b,c;a=0;b=0;c=0;
        float percentage; 
        scanf("%d%d%d", &a, &b, &c);


        
        percentage = (a+b+c) / 3.0;

        printf("%.2f\n", percentage);


        
        if(percentage >= 90)
        {
            printf("A");
        }
        else if(percentage >= 80)
        {
            printf("B");
        }
        else if(percentage >= 70)
        {
            printf("C");
        }
        else if(percentage >= 60)
        {
            printf("D");
        }
        else if(percentage >= 40)
        {
            printf("E");
        }
        else
        {
            printf("F");
        }

        return 0;
    }
