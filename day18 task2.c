//Write a C program to input two numbers.If sum of the numbers is even, find the reverse of the sum .If sum is odd check whether the sum is prime or not.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void reverse (int a,int b)
{
    int sum,x,i,rev=0,n=0,d;
    sum=a+b;
    if(sum%2==0)
    {
        d=sum;
        while(sum!= 0)
    {
        x = sum%10;
        rev = rev*10 + x;
        sum /= 10;
    }
        printf("%d\n%d",d,rev);
    }
    else
        { 
            for(i=2;i<=(sum/2);i++)
            {
                if(sum%i==0)
                {
                    n=1;
                }
            }
            if(n==0)
            {
                 printf("%d\nPrime",sum);
            }
            else 
            {
               printf("%d\nNot prime",sum);
            }
        }
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    reverse(a,b);
    return 0;

}
