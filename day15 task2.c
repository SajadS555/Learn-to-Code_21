//Write a C Program to display the product of two 2D arrays. Given values for both the 2D Arrays.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j,k,sum=0;
    int a[100][100],am,an;  //first matrix
    int b[100][100],bm,bn; //second matrix
    int result[100][100]; //product matrix
    
    // first matrix values
    scanf("%d %d",&am,&an);
    for(i=0; i<am; i++)
    {
        for(j=0; j<an; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //second matrix values
    scanf("%d %d",&bm,&bn);
    if(an==bm)
    {
        for(i=0; i<bm; i++)
        {
            for(j=0; j<bn; j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
    
    
      // calculation of produtc of above two matrices
    for(i=0; i<am; i++)
    {
        for(j=0; j<bn; j++)
        {
            for(k=0; k<bm; k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }
    //printing of resultant matrix
    for(i=0; i<am; i++)
        {
            for(j=0; j<bn; j++)
            {
                printf("%d ",result[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("ERROR");
    }
    
    
    return 0;
}
