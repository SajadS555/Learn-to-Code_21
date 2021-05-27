//Write a C Program to read a 2D array. Then, search for a particular given element. If found, display each occurrence of that element with its position(s).

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a[100][100],i,j,m,n,x,y=0;
    scanf("%d %d",&m,&n);
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("\n%d",&x);
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i][j]==x)
            {
                y=1;
                printf("Element found at (%d,%d)\n",i,j);
            }
        }
    }
    if(y!=1)
        printf("Element not found");
    
    return 0;
}
