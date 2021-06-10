//Write a C program that reads and displays details of 4 students. The 'structure' should contain the RollNo(int), FirstName(string) and marks(float).


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct student
{
    char name[100];
    float marks;
    int roll;
}
    s[20];

int main()
{
    for(int i=0;i<4;i++)
    {
        scanf("%d",&s[i].roll);
        scanf("%s",s[i].name);
        scanf("%f",&s[i].marks);
    }
    for(int i=0;i<4;i++)
    {
        printf("DETAILS OF ROLLNO %d\n",s[i].roll);
        printf("NAME: ");
        puts(s[i].name);
        printf("MARKS: %.2f\n",s[i].marks);
    }
    return 0;
}
